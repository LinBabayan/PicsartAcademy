#include <stdio.h>
#include <stdlib.h>

double toFar(double temp){
	return (temp * 9.0 / 5.0) + 32.0;
}

int main(){
	double celcius;
	if(scanf("%lf", &celcius) != 1){
		printf("error\n");
		exit(1);
	}
	printf("%.1lf", toFar(celcius));
	return 0;
}
