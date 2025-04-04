#include <stdio.h>
#include <stdlib.h>

int max(int a, int b){
	if(a > b)
		return a;
	return b;
}

int main(){
	int a, b;
	if(scanf("%d %d", &a, &b) != 2){
		printf("error\n");
		exit(1);
	}
	
	printf("max is: %d", max(a, b));
	return 0;
}
