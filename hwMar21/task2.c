#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	printf("enter n: ");
	if(scanf("%d", &n) != 1){
		perror("error\n");
		exit(1);
	}
	if(n < 1){
		printf("invalid n\n");
		exit(0);
	}
	int sum = 1;
	for(int i = 2; i <= n/2; ++i){
		if(n % i == 0)
			sum += i;
	}
	if(sum == n)
		printf("is perfect\n");
	else 
		printf("is not perfect\n");
	return 0;
}
