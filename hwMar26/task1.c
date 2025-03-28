#include <stdio.h>

int main(){
    int a = 5;  
    int *ptr = &a;  

    printf("Address of a: %p\n", (void*)&a);
    printf("Address with pointer: %p\n", (void*)ptr);

    printf("Value of a: %d\n", *ptr);

    return 0;
}
