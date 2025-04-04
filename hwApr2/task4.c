#include <stdio.h>
#include <stdlib.h>

double sum(double a, double b){
	return a + b;
}

int main(){
	double a, b;
	if(scanf("%lf %lf", &a, &b) != 2){
		printf("error\n");
		exit(1);
	}
	printf("%.4lf", sum(a, b));
	return 0;
}

