#include <stdio.h>

void printBinary(int n) {
    if (n == 0) {
        printf("0");
        return;
    }

    if (n > 0) {
        void printBinaryHelper(int n) {
            if (n == 0) {
                return;
            }
            printBinaryHelper(n / 2);
            printf("%d", n % 2);
        }
        printBinaryHelper(n);
    }

    printf("\n");
}

void run_binary_program() {
    int num = 0;
    scanf("%d", &num);
    printBinary(num);
}


