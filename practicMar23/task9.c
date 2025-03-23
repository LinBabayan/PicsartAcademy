#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, num;
	printf("enter num and n: ");
	if(scanf("%d %d", &num, &n) != 2){
		perror("error\n");
		exit(1);
	}
	if((num >> n) & 1)
		printf("the %dth bit is 1\n", n);
	else
		printf("the %dth bit is 0\n", n);
	return 0;
}
