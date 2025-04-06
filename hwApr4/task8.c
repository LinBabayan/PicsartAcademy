#include <stdio.h>

int reverseNumber(int n) {
    int reversed = 0;
    while (n != 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    return reversed;
}

int main() {
    int num = 0;
    
    printf("enter num: ");
    scanf("%d", &num);
  
    printf("Reversed number: %d\n", reverseNumber(num));  
    return 0;
}
