#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b){
	return a + b;
}

int main(){
	int a, b;
	if(scanf("%d %d", &a, &b) != 2){
		printf("error\n");
		exit(1);
	}
	printf("%d\n", sum(a, b));
	return 0;
}
