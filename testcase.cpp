#include<iostream>
#include<vector>
#include<limits>
#include<math.h>
using namespace std;

int house(int colors[],int n ){
        int a=1;
        int b=1;
        for(int i =n-1;i>0;i--)
            if(colors[0]!=colors[i]){
             a = i; 
             break;
        }
        for(int j = 0 ;j<n-1;j++){
            if(colors[n-1]!=colors[j]){
              b = ((n-1)-j); 
              break;
            }
        }
        return max(a,b);
}
int main(){
    int a[13] = {4,4,4,4,11,4,4,11,4,4,4,4,4};
    int result = house(a,13);
    cout<<result;
}
