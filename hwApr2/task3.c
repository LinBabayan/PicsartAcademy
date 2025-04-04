#include <stdio.h>
#include <stdlib.h>

int isPositive(int a){
	if(a > 0)
		return 1;
	return 0;
}

int main(){
	int a;
	if(scanf("%d", &a) != 1){
		printf("error\n");
		exit(1);
	}
	if(isPositive(a)){
		printf("positive\n");
		return 0;
	}
	printf("negative\n");
	return 0;
}
