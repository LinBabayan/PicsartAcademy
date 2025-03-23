#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("enter n: ");
	int n;
	if(scanf("%d", &n) != 1){
		perror("error");
		exit(1);
	}
	int count = 0;
	while (n){
		count += n & 1;
		n >>= 1;	
	}
	printf("%d\n", count);
	return 0;
}
