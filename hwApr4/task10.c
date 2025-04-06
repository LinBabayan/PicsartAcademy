#include <stdio.h>

int fibrec(int n) {

    if (n <= 1) {
        return n;  
    }
    return fibrec(n - 1) + fibrec(n - 2);  
}


int fibiter(int n) {

    if (n <= 1) {
        return n;  
    }

    int prev1 = 0, prev2 = 1, current;
    for (int i = 2; i <= n; i++) {
        current = prev1 + prev2;  
        prev1 = prev2;      
        prev2 = current;      
    }

    return prev2;
}


int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Fibonacci number (recursive): %d\nFibonacci number (iterative): %d\n", fibrec(n), fibiter(n));

    return 0;
}

