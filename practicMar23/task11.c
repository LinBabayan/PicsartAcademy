#include <stdio.h>
#include <stdlib.h>

int main(){
	int num, n, mask;
	printf("enter num, n, mask: ");
	if(scanf("%d %d %d", &num, &n, &mask) != 3){
		perror("error\n");
		exit(1);
	}
	
	int result = num << n;
	result &= mask;
	printf("%d\n", result);
	return 0;
	
}
