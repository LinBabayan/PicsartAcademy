#include <stdio.h>

void generateMultiplicationTable2() {
    for(int i = 1; i < 10; ++i){    
        for(int j = 1; j <= 10; ++j){
            printf("%d * %d = %d\n", i, j , i * j);
        }
        printf("\n");
    }
}

int main() {
    generateMultiplicationTable2();   
    return 0;
}

