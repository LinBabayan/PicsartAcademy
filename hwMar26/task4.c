#include <stdio.h>

int main(){
	
	int a = 10, b = 20, c = 0;
	int* tmp = &c;
	
	printf("before: a = %d, b = %d\n", a, b);
	
	*tmp = a;
	a = b;
	b = *tmp;
	
	printf("after: a = %d, b = %d\n", a, b);
	
	return 0;
}
