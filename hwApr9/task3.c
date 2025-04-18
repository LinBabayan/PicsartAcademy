#include <stdio.h>

void printDownToZero(int n) {
    if (n < 0) {
        return;
    }
    printf("%d\n", n);
    printDownToZero(n - 1);
}

void run_print_program() {
    int num;
    scanf("%d", &num);
    printDownToZero(num);
}

