#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, b;
	printf("enter a and b: ");
	if(scanf("%d %d", &a, &b) != 2){
		perror("error\n");
		exit(1);
	}
	
	a ^= b;
	b ^= a;
	a ^= b;
	
	printf("a: %d b: %d\n", a, b);
	return 0;
		
}

