#include <stdio.h>

void printArrayReverse(int arr[], int n) {
    if (n == 0) {
        return;
    }
    printf("%d ", arr[n - 1]);
    printArrayReverse(arr, n - 1);
}

void run_reverse_array_program() {
    int n = 0, arr[100];
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    printArrayReverse(arr, n);
}


