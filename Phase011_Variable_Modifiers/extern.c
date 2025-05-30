
#include<stdio.h>

int main(){
    
    extern int a; // only declaration not definations.
    // used when we want to reuse a variable of another files.

    printf("%d",a);
    return 0;
}