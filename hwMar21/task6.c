#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	printf("enter n: ");
	if(scanf("%d", &n) != 1){
		perror("error\n");
		exit(1);
	}
	if(n < 2){
		printf("enter valid n\n");
		exit(0);
	}
	for (int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			if( i == 0 || i == n - 1 || j == 0 || j == n - 1)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}
