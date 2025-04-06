#include <stdio.h>

void decimalToHex(int n) {
    printf("Hexadecimal: %X\n", n);
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    decimalToHex(number);
    return 0;
}
