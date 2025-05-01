#include<stdio.h>

void fun(int a){
    if(a == 0){
        return 0;
        a += 1;
        printf("\n\t");
        printf("%d",a);
        fun(a);
    }
    
}

int main(){
    int a = 5;
    fun(5);
}