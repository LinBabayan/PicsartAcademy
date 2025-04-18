#include <stdio.h>

int upper(char a) {
    return (a >= 'A' && a <= 'Z');
}

char find_first_uppercase(char *str) {
    if (*str == '\0') {
        return '\0';
    }

    if (upper(*str)) {
        return *str;
    }

    return find_first_uppercase(str + 1);
}

void run_uppercase_program() {
    char str[100];

    printf("enter string: ");
    scanf("%s", str);

    char result = find_first_uppercase(str);

    if (result != '\0') {
        printf("The first uppercase: %c\n", result);
    } else {
        printf("No uppercase found.\n");
    }
}


