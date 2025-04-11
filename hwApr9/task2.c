#include <stdio.h>

int productOfDigits(int n) {
    if (n == 0){
        return 0;
        }
    if (n < 10){
        return n;
        }
    return (n % 10) * productOfDigits(n / 10);
}

int main() {
    int num = 0;
    
    scanf("%d", &num);
    printf("result = %d\n", productOfDigits(num));
    
    return 0;
}

