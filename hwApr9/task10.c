#include <stdio.h>

int findSmallest(int arr[], int size) {
    if (size == 1) {
        return arr[0];
    }

    int minOfRest = findSmallest(arr + 1, size - 1);
    return (arr[0] < minOfRest) ? arr[0] : minOfRest;
}

int findLargest(int arr[], int size) {
    if (size == 1) {
        return arr[0];
    }

    int maxOfRest = findLargest(arr + 1, size - 1);
    return (arr[0] > maxOfRest) ? arr[0] : maxOfRest;
}

void run_array_program() {
    int arr[10], size = 0;
    
    printf("enter size: ");
    scanf("%d", &size);
    
    printf("enter array: ");
    for (int i = 0; i < size; ++i) {
        scanf("%d", arr + i);
    }
   
    printf("smallest: %d\n", findSmallest(arr, size));
    printf("largest: %d\n", findLargest(arr, size));
}


