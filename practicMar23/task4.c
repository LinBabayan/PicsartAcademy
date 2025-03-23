#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("enter n: ");
	int n;
	if(scanf("%d", &n) != 1){
		perror("error\n");
		exit(1);
	}
	int count = 0;
	while (n){
		count += n & 1;
		n >>= 1;
	}
	if(count % 2 == 0)
		printf("%d, even\n", count);
	else 
		printf("%d, odd\n", count);
	return 0;
}
