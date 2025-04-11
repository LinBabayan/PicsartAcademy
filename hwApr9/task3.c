#include <stdio.h>

void printDownToZero(int n) {
    if (n < 0){
        return;
        }
    printf("%d\n", n);
    printDownToZero(n - 1);
}

int main() {
    int num = 0;
    
    scanf("%d", &num);
    printDownToZero(num);
    
    return 0;
}

