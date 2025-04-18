#include <stdio.h>

int sumOfDigits(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + sumOfDigits(n / 10);
}

void run_sum_program() {
    int num = 0;
    scanf("%d", &num);
    printf("Sum of digits = %d\n", sumOfDigits(num));
}


