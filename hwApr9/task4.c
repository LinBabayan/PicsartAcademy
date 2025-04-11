#include <stdio.h>

void printUpToN(int n) {
    if (n < 0){
        return;
    }
    
    printUpToN(n - 1);
    printf("%d\n", n);
}

int main() {
    int num = 0;
    
    scanf("%d", &num);
    printUpToN(num);
    
    return 0;
}

