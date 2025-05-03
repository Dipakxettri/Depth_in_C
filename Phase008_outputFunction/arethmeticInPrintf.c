
#include<stdio.h>

int main(){
    
    int a = 20, b = 20, c = 12, d = 2;
    int result = (a + b) * c / d;

    printf("(%d + %d) * %d / %d", a,b,c,d); //prints the arethmetic expression
    printf("%d",result);//prints result

    return 0;
}