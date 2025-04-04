#include <stdio.h>

int main() {
    char str[100];
    int n = 0;

    printf("Enter a string: ");
    scanf("%99s", str); 

    while (str[n] != '\0')
        n++;
    

    for (int i = 0; i < n / 2; i++){
        char temp = str[i];
        str[i] = str[n - 1 - i];
        str[n - 1 - i] = temp;
    }

    printf("%s\n", str);
    return 0;
}

