#include <stdio.h>

int productOfDigits(int n) {
    if (n == 0) {
        return 0;
    }
    if (n < 10) {
        return n;
    }
    return (n % 10) * productOfDigits(n / 10);
}

void run_product_program() {
    int num;
    scanf("%d", &num);
    printf("result = %d\n", productOfDigits(num));
}

int main() {
    run_product_program();
    return 0;
}
