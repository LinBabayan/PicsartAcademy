#include <stdio.h>

int main() {
    int n, a1[100], a2[100], *p1, *p2, same = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter the first array: ");
    for (p1 = a1; p1 < a1 + n; ++p1) 
        scanf("%d", p1);
    

    printf("Enter the second array: ");
    for (p2 = a2; p2 < a2 + n; ++p2) 
        scanf("%d", p2);
    

    for (p1 = a1, p2 = a2; p1 < a1 + n; p1++, p2++) {
        if (*p1 != *p2) {
            same = 0;
            break;
        }
    }

    printf(same ? "The arrays are the same.\n" : "The arrays are different.\n");

    return 0;
}

