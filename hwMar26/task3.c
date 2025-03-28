#include <stdio.h>

int main(){
	
	char c = 'a';
	char *ptr = &c;
	
	printf("before incriment: %p\n", (void*)ptr);
	
	++ptr;
	
	printf("after increment: %p\n", (void*)ptr);
	
	return 0;
}
