#include <stdio.h>

void fact() {
    int n = 0;
    printf("enter n: ");
    scanf("%d", &n);

    int factorialrec(int n) {
        if(n == 0) {
            return 1;
        }
        return n * factorialrec(n - 1);
    }

    int factorial(int n) {
        int fact = 1;
        for(int i = 2; i <= n; ++i) {
            fact *= i;
        }
        return fact;
    }

    printf("fact using recursion: %d\nfact without recursion: %d\n", factorialrec(n), factorial(n));
}

int main() {
    fact();
    return 0;
}
