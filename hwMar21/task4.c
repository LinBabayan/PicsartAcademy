#include <stdio.h>

int main(){
	
	int n = 0;
	printf("enter n: ");
	scanf("%d", &n);
	if(n < 1){
		printf("enter valid n\n");
		return 1;
	}
	
	int i = 1, sum = 0;
	while(sum < n){
		sum += i;
		++i;
	}
	int q = 0;
	if(sum != n);
	else q = 1;
	
	if(!q){
		printf("invalid n\n");
		return 0;
	}
	int num = 1;	
	for(int i = 0; num <= n; ++i){
		for (int j = 0; j < i; j++) { 
			printf("%d ", num++);
		}
		printf("\n");
	}
	return 0;
}
