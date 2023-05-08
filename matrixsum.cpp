#include <iostream>
#include <vector>
using namespace std;
int diagonalSum(vector<vector<int>> &mat)
{
    int i = 0, j = 0, k = mat.size() - 1;
    int ans = 0;
    if (mat.size() == 1)
        return ans = mat[0][0];
    while (i < mat.size())
    {
        if (j == k)
        {
            ans += mat[k][j];
            i++;
            j++;
            k--;
        }
        ans += mat[i][k] + mat[i][j];
        i++;
        j++;
        k--;
    }
    return ans;
}
int main()
{
    vector<vector<int>> a = {{1, 2, 3},
                             {4, 5, 6},
                             {7, 8, 9}};
    cout << diagonalSum(a);

    return 0;
}