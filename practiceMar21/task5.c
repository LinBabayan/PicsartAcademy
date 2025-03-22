#include <stdio.h>
#include <stdlib.h>

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
	
	while (n != 0){
		int digit = n % 10;
		if(digit != 4 && digit != 7){
			printf("not lucky\n");
			return 0;
		}
		n /= 10;
		
	}
	printf("lucky\n");
	return 0;
}
