
#include<stdio.h>

int main(){
    register int a = 20; // The register keyword put the value to the register which has more speed for access time over secondry memory.
    // But the compiler auto optimization by himself. means freequently used variables may stored in register even we does't use a register keyword.

    printf("%d",a);

    
    return 0;
}