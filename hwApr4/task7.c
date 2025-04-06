#include <stdio.h>

int power(int num, int exp){
	int power = 1; 
	while (exp != 0) {
		power *= num;
		--exp;
	}
	return power;
}

int main(){
	int num = 0, exp = 0;
	printf("enter num and exp: ");
	scanf("%d %d", &num, &exp);

	printf("%d ^ %d = %d", num, exp, power(num, exp));
	
	return 0;
}
