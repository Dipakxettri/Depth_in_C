
// Understanding the Wrap Around, Overflow and Underflow

#include <stdio.h>
#include <limits.h>

int main()
{
    // 1st code (Error):
    // unsigned int a = 4294967296;
    // unsigned int b = UINT_MAX;
    // printf("%u", a);//throws an error becuase it exceed the range of int


    // 2nd Code (OverFlow):
    unsigned int c = 4294967295; // UINT_MAX (max value for unsigned int)
    c = c + 2;                   // Overflow: it wraps around to 0
    printf("%u", c);             // prints 0


    // why exectally the first code gives an error and second code consider a overflow and prints 0 even both exceed the range and should display same result but it is different why?
    // => When we add 1 to 4294967295, it overflows and wraps around to 0, but the value still fits within the range of the unsigned int type. This is why the 4294967296 (which exceeds the unsigned int range) is treated by the compiler as an overflow that wraps around.However, when you directly assign 4294967296 to an unsigned int (without any operation like a = a + 1), the compiler checks if the value is within the valid range of the data type.
    // Direct assignment of 4294967296 to unsigned int causes an error because 4294967296 is too large for an unsigned int to store in its original 32-bit range.The overflow behavior happens only when you're performing an operation that exceeds the range, such as adding 1 to 4294967295, not when directly assigning a value that is out of range.


    // How warps around works ?
    // if we add 1:
    // 11111111 11111111 11111111 11111111
    // +00000000 00000000 00000000 00000001
    // -----------------------------------
    // 00000000 00000000 00000000 00000000  // overflow! starts again from 0

    // if we add 2
    // 11111111 11111111 11111111 11111111
    // +00000000 00000000 00000000 00000010
    // -----------------------------------
    // 00000000 00000000 00000000 00000001  // overflow! wraps around to 1


    // this means if we add any number to a value and try to exceed the range the C or system tryes to add more combination to fullfill that given number or range but it can't and reset again or wraps around to find from where it will start use formula:(n - 1) where n is a added number.
    // Note: a Overflow or wraps around act like a mod function.


    // Same things apply in signed int


    return 0;
}