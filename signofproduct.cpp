#include<iostream>
#include<vector>
using namespace std;
 int signFunc(long double  n){
        if(n<0){
            return -n/n;
        }
        return n/n;
    }
    int arraySign(vector<int>& nums) {
        long double product = 1;
        for(int i = 0 ; i< nums.size();i++){
            if(nums[i]==0){
                return 0 ;
                break;
            }
            product = product*nums[i];
        }
        return signFunc(product);
    }
int main()
{
 return 0;
}