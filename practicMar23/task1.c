#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("enter n: ");
	int n;
	if(scanf("%d", &n) != 1){
		perror("error\n");
		exit(1);
	}
	if(n < 0){
		printf("invalid n \n");
		exit(0);
	}
	
	if(n & 1)
		printf("odd\n");
	else
		printf("even\n");
	
	return 0;
}
