#include <stdio.h>

int isPrime(int num) {
    if (num <= 1)
        return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int canBeSumOfTwoPrimes(int n) {
    for (int i = 2; i <= n / 2; i++) {
        if (isPrime(i) && isPrime(n - i))
            return 1;
    }
    return 0;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (canBeSumOfTwoPrimes(number))
        printf("%d can be expressed as the sum of two prime numbers.\n", number);
    else
        printf("%d cannot be expressed as the sum of two prime numbers.\n", number);

    return 0;
}

