#include <stdio.h>

int fibonacci(int n) {
    if (n < 2) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

void run_fibonacci_program() {
    int n;
    scanf("%d", &n);
    printf("Fibonacci(%d) = %d\n", n, fibonacci(n));
}

int main() {
    run_fibonacci_program();
    return 0;
}
