#include <stdio.h>

void generateMultiplicationTable() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}

int main() {
    generateMultiplicationTable();   
    return 0;
}

