#include <stdio.h>
#include <stdlib.h>

int main(){
	int num, n;
	printf("enter  um and n: ");
	if(scanf("%d %d", &num, &n) != 2){
		perror("error\n");
		exit(1);
	}
	
	printf("mult is: %d, div is: %d",num <<n, num >> n);
	return 0;
}
