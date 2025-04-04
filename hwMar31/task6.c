#include <stdio.h>

int main() {
    int arr[10];
    int target;
    int found = -1;

    printf("Enter 10 elements of the array:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target: ");
    scanf("%d", &target);

    for (int i = 0; i < 10; i++) {
        if (arr[i] == target) {
            found = i;
            break;
        }
    }

    if (found != -1) 
        printf("Target element %d found at index %d.\n", target, found);
    else 
        printf("-1\n");

    return 0;
}

