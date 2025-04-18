#include <stdio.h>




void demonstrateUnion() {
    union Value v;

    v.intValue = 25;
    printf("Integer value: %d\n", v.intValue);

    v.floatValue = 12.5;
    printf("Float value: %.2f\n", v.floatValue);

    printf("Size of union: %lu bytes\n", sizeof(v));
}



