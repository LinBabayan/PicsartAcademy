#include <stdio.h>

void printUpToN(int n) {
    if (n < 0) {
        return;
    }
    
    printUpToN(n - 1);
    printf("%d\n", n);
}

void run_print_up_program() {
    int num;
    scanf("%d", &num);
    printUpToN(num);
}

int main() {
    run_print_up_program();
    return 0;
}
