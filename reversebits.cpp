#include<iostream>
using namespace std;
uint32_t reverseBits(uint32_t n){
      uint32_t bit ;
        uint32_t mask = 0;
        for(int i=0;i<=31;i++){
            bit = n&1;
            mask = mask<<1|bit;
            n=n>>1;
            }
       return mask; 

}
int main()
{
    uint32_t n = 11111111111111111111111111111101;
    
    uint32_t ans = reverseBits(n);
    cout<<ans<<endl;


    
} 


