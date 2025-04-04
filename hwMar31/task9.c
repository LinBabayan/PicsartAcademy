#include <stdio.h>

int main() {
    int n;
    
    scanf("%d", &n);
    
    int a[n - 1];
    
    int xor_all = 0, xor_a = 0;

    for (int i = 1; i <= n; i++) 
        xor_all ^= i;
    

    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &a[i]);
        xor_a ^= a[i];
    }

    printf("%d\n", xor_all ^ xor_a);
    return 0;
}

