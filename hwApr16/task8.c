#include <stdio.h>

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



