#include <stdio.h>

int main(){
	
	int a = 10, b = 20;
	int *ptr = &a;
	
	printf("before: %d\n", a);
	
	*ptr = 50;
	
	printf("after: %d\n", a);
}
