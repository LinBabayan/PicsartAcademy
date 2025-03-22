#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, current;
	printf("enter n: ");
	if(scanf("%d", &n) != 1){
		perror("error\n");
		exit(1);
	}
	
	if(n < 0){
		printf("invalid n\n");
		exit(0);
	}
	
	switch(n){
		case 0 :
			current = 0;
			break;
		case 1 :
			current = 1;
			break;
		default:
			int prev1 = 0, prev2 = 1;
			for(int i = 2; i <= n; ++i){
				current = prev1 + prev2;
				prev1 = prev2;
				prev2 = current;
			}
	}
	printf("%d\n", current);
	return 0;
}


//recursive version
/*
int fib(int n){
	if(n == 0)
		return 0;
	if(n == 1)
		return 1;
	return fib(n - 1) + fib(n - 2);
}

int main(){
	
	int n;
	printf("enter n: ");
	if(scanf("%d", &n) != 1){
		perror("error\n");
		exit(1);
	}
	
	if(n < 0){
		printf("invalid n\n");
		exit(0);
	}
	printf("%d\n", fib(n));
	return 0;
	
}
*/
