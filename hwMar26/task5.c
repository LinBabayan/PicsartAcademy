#include <stdio.h>

int main(){
    int *ptr = NULL;  

    if (ptr == NULL) 
        printf("Pointer is NULL.\n");
    

    int a = 10;  
    ptr = &a;   

    printf("x: %d\n", *ptr);

    return 0;
}
