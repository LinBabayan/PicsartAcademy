#include <stdio.h>

void printArray(int *arr, int n) {
    if (n == 0) {
        return;
    }
    
    printArray(arr, n - 1);
    printf("%d ", arr[n - 1]);
}

void run_array_program() {
    int n = 0, arr[100];
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    printArray(arr, n);
}


