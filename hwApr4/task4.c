#include <stdio.h>

int sumOfDigits(int n){
	int sum = 0; 
	while (n != 0){
		sum += n % 10;
		n /= 10; 
	}
	return sum;
}

int main(){
	int n = 0;
	printf("enter n: ");
	scanf("%d", &n);
	
	printf("sum of digits is: %d\n", sumOfDigits(n));
	
	return 0;
}
