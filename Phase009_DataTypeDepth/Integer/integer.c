
#include<stdio.h>

int main(){
    
    // the Size of int is around 4 bytes.
    // To check the size of int we can use (sizeof) opertaor
    printf("%d",sizeof(int));//size of is a unary operator not a function.

    // 1 bytes = 8 bits.

    // Range: upper and lower limit of some set of data.
    // ex: {0,1,2,3,4}
    // Range: 0 to 4


    // Decimal number system: human understandale number system also called base 10 number system Range: 0 to 9 
    // ex of decimal number sysem: 5 6 8
    // insted of saying 568 we pronounce it as a fivehundred sixty eight becuase we have only range from 0 to 9 to represent such large number we have to mulifply each nuber with their respectie-ve values
    // ex:

    // 2    1   0
    // 10  10  10
    // 5   6    8

    // => 10^2*5+10^1*6+10^0*8 = 500 + 60 + 8 = 568


    // Binary System: machine understandable number system (base 2). Range 0 - 1
    // ex:

    // 3  2  1  0
    // 2  2  2  2 - base
    // 1  1  0  0 - binary number

    // =>2^3*1+2^2*1+2^1*0+2^0*0 = 8 + 4 + 0 + 0 = 12


    // finding the range of a bit:
    // Range of 4 Bit Data:
    // 3 2 1 0
    // 2 2 2 2
    // 0 0 0 0 - minimum value = 0

    // 1 1 1 1 - maximum value = 15

    // range of 4 bite after calculating following = 0000 to 1111 or 0 to 15

    // another easy formula to calculate a maximum value : 2^n - 1
    // ex: 2^4 -1 = 15 


    // Calculating Range of int: 
    // the bytes of int is 4 
    // 4 bytes = 32 bits 
    // after aaplying the (2^32 - 1) we get the maximum range of int


    // unsigned range: are those by applying (2^n - 1)
    
    // signed range : are those by applying 2's complement -2(^n-1) to +(2^n-1 - 1)
    return 0;
    
}