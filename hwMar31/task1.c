#include <stdio.h>

int main(){
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str); 

    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] &= 0xDF; 
        }
    }
    printf("%s\n", str);
    return 0;
}
