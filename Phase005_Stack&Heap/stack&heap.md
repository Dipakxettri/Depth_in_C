
## Random Access memory
=> the ram is a memory regain hat is used to run programs and it devided into three segments
1. Machine code  
2. Stack  
3. Heap

# Memory stack
memory stack stores the global variable and after that functions and local veriable

### steps:
1. firstly the local variable and a main() method will invoked into a stack - stack frame
2. then the functions will be store in a stack until the function will executed a variables will remain in the stack.
3. after the function exectutate a function will poped out from stack and then a main() also poped from stack.

## Stack overflow 
- if there is nothing like stopping a recurssive function then the function will keep adding in stack
- fixed size , can't manuplate a scope of variable

## Memory Heap
- memory heap is the memory layout where the dynamic allocation takes place.
- not fixed
- can control how much a memory to use

functions in the C programming deals with dynamic memory allocation
1. malloc()
2. calloc()
3. realloc()
4. Free()

Ex: 
#include<stdio.h>
#include<stdlib.h>

```
int main(){
    int *z;
    z = (int*)malloc(sizeof(int));

    *z = 100;

}
```
here z = (int*)malloc(sizeof(int)) - commanding a 4 bytes of random memory
