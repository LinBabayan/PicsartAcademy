#include <stdio.h>

int main() {
    int a[20], n, *left, *right, temp;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    left = a;
    right = a + n - 1;

    while (left < right) {
        while (*left % 2 == 0 && left < right) left++;
        while (*right % 2 == 1 && left < right) right--;
        if (left < right) {
            temp = *left;
            *left = *right;
            *right = temp;
        }
    }

    printf("Rearranged array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

