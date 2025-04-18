#include <stdio.h>

void decimalToHex(int n) {
    char hex[20];
    int i = 0;

    if (n == 0) {
        printf("Hexadecimal: 0\n");
        return;
    }

    while (n != 0) {
        int remainder = n % 16;

        // Convert remainder to hex character
        if (remainder < 10)
            hex[i] = remainder + '0';
        else
            hex[i] = remainder - 10 + 'A';

        n = n / 16;
        i++;
    }

    printf("Hexadecimal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hex[j]);
    }
    printf("\n");
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    decimalToHex(number);
    return 0;
}
