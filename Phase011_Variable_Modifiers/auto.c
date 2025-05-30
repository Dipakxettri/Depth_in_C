
#include<stdio.h>

int var; // global variable which will store 0 
int main(){
    
    // the auto variable are defult varaible that distroy after execution in local function

    auto int var2; // automatically gets a some random garbage values if not declared a values

    int var; //local variable also gets a some random garbage values if not declared a values.

    // printf("%d", var2);
    printf("%d", var);
    return 0;
}