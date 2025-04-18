#include <stdio.h>

union Data {
    int i;
    float f;
    char c;
};

void assignInt(union Data *d, int value) {
    d->i = value;
    printf("Assigning int value: %d\n", d->i);
    printf("int: %d, float: %f, char: %c\n\n", d->i, d->f, d->c);
}

void assignFloat(union Data *d, float value) {
    d->f = value;
    printf("Assigning float value: %f\n", d->f);
    printf("int: %d, float: %f, char: %c\n\n", d->i, d->f, d->c);
}

void assignChar(union Data *d, char value) {
    d->c = value;
    printf("Assigning char value: %c\n", d->c);
    printf("int: %d, float: %f, char: %c\n\n", d->i, d->f, d->c);
}

int main() {
    union Data d;

    assignInt(&d, 10);
    assignFloat(&d, 5.5);
    assignChar(&d, 'A');

    printf("Size of union: %lu bytes\n", sizeof(d));

    return 0;
}

