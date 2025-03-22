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
	
	for(int i = 0; i <= n; ++i){
		for (int j = 0; j < i; ++j)
			printf("%d", i);
		printf("\n");
	}
	return 0;		
}
