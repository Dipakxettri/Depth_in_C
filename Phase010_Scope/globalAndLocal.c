
// {
    // this is a block 
// }

#include<stdio.h>

int a = 20; // global variable;

int fun();
int main(){
    int a = 80;//local variable
    printf("%d",a);

    int b = 100;
    printf("%d",b);

    {
        int b = 200;
        printf("%d",b);
    }
    fun();
    return 0;
}

int fun(){
    printf("%d",a);
}