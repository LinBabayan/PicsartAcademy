#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

bool canDraw(int n){
//checking if it is possible to draw a triangle using given n by calculating whether it is a sum of numeric sequence(first element = 1, incriment by 1)
	int i = 1, sum = 0;
	while(sum < n){
		sum += i;
		++i;
	}
	
	if(sum != n)
		return false;
	return true;
	
//alternative way of checking
//put the n into the formula of sum of a numeric sequence and check if the count of numbers is a real num
/*
	double D = 1 + 8 * n;
	int sqrt_D = sqrt(D);
	if(sqrt_D * sqrt_D == D)
		return true;
	return false;
*/	
}


int main(){
	int n;
	printf("enter n: ");
	if(scanf("%d", &n) !=1){
		perror("error");
		exit(1);
	}
	if(n < 1){
		printf("enter valid n\n");
		exit(0);
	}
	
	if(!canDraw(n)){
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
