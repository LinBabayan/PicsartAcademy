#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("enter n: ");
	int n;
	if(scanf("%d", &n) != 1){
		perror("error\n");
		exit(1);
	}
	printf("%d\n", n << 1);
	return 0;

}
