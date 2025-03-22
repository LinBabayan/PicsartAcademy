#include <stdio.h>
#include <stdlib.h>
#include <math.h>


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
	
	int count = 0, tmp = n;
	while(tmp != 0){
		tmp /= 10;
		++count;
	}
	
	tmp = n;
	int sum = 0;

	while(tmp != 0){
		int digit = tmp % 10;
		sum += pow(digit, count);
		tmp /= 10;
	}
	
	if(sum == n)
		printf("is armstrong\n");
	else
		printf("not armstrong\n");
	return 0;
}
