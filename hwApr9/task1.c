#include <stdio.h>

int fibonacci(int n) {
    if (n < 2){
        return n;
        }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n = 0;
    
    scanf("%d", &n);
    printf("Fibonacci(%d) = %d\n", n, fibonacci(n));
    
    return 0;
}

