#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, num;
	printf("enter n and num: \n");
	if(scanf("%d %d", &n, &num) != 2){
		perror("error\n");
		exit(1);
	}
	if(n < 0){
		printf("invalid n\n");
		exit(1);
	}
	
	int bitmask = 1 << n;
	printf("%d\n", num | bitmask);
	return 0;
}
