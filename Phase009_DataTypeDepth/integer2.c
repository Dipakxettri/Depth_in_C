
// we will discuss in detail about following topics:
// type modifiers (short int, long int, long long int, unsigned and signed(defult)).
//#include <limits.h>.
//constants of limits.h Ex: INT_MIN, INT_MAX and many other.


#include <stdio.h>
#include <limits.h>//a header file for detarmining the minimum and maximum value of any data type according to systes

int main()
{

    // long and short:
    // Note: the bytes of datatypes depends on the systems specally (long int) type.
    long long a = 20;
    printf("%zu", sizeof(a));//8 bytes
    // Note:
    // sizeof(short) <= sizeof(int)
    // sizeof(int) <= sizeof(long)
    // sizeof(long) <= sizeof(long long)


    // constants of limits.h header file:
    int a = INT_MIN;
    int b = INT_MAX;
    printf("%d to %d", a,b); //here a range is in signed 
    // we can also get a unsigned range using unsigned modifier:
    unsigned int c = 0;
    unsigned int d = UINT_MAX;
    printf(" %u to %u",c,d); //here a range is in unsigned 


    // the short int, long int and long long int are just modifiers recducing and exceding the size of int.
    // short int:
    short int e = SHRT_MIN;
    short int f = SHRT_MAX;
    printf(" %d to %d",e,f); 
    // unsigned short int:
    unsigned short int g = 0;
    unsigned short int h = USHRT_MAX;
    printf(" %u to %u",g,h); 

    
    // long int (size depends on systems):
    long int i = LONG_MIN;
    long int j = LONG_MAX;
    printf(" %ld to %ld",i,j);//may display the same size as of int because it depends in system
    // unsigned long int:
    unsigned long int k = 0;
    unsigned long int l = LONG_MAX;
    printf(" %lu to %lu",k,l); //already mentained that can display the same size as int because it depends in system


    // long long:
    long long m = LLONG_MIN;
    long long n = LLONG_MAX;
    printf(" %lld to %lld",m,n);
    // unsigned long long:
    unsigned long long o = 0;
    unsigned long long p = ULLONG_MAX;
    printf(" %llu to %llu",o,p);


    // A Question argues why use short int, long int and long long int? and why we write a int after each type like (short int) where in other languages like java we just do like short,long why we are doing these in C?
    // => the answer is that a C is more about effective memory management C provide effective ways of memory management and these concepts are the part of it.
    // In C:
    // short, long, and long long are type modifiers. They modify the base type int they are not a seperate types like in java but they are build on int type they are just modifiers that can reduce and increase the size of int.
    // So:
    // short int means: a short version of an int
    // long int means: a longer version of an int
    // long long int means: a really long version of an int 

    // these topics just clears the idea that a C gives low level control over memory and hardware 




    return 0;
}