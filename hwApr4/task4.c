#include <stdio.h>

void computeSumOfDigits() {
    int n = 0;
    printf("enter n: ");
    scanf("%d", &n);

    int sumOfDigits(int n) {
        int sum = 0;
        while (n != 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }

    printf("sum of digits is: %d\n", sumOfDigits(n));
}

int main() {
    computeSumOfDigits();
    return 0;
}
