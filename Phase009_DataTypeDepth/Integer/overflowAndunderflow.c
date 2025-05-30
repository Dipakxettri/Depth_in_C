
#include<stdio.h>
#include<limits.h>


int main(){
    
    //signed
    int min = INT_MIN;
    int max = INT_MAX;

    // unsigned
    unsigned int min2 = 0;
    unsigned int max2 = UINT_MAX;
    printf("in Signed Range is from %d to %d", min ,max);
    printf("  in UnSigned Range is from %u to %u", min2 ,max2);

    // overflow and underflow
    printf(min+1);
    return 0;
}