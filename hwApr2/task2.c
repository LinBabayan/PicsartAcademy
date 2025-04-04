#include <stdio.h>
#include <stdlib.h>

int square(int a){
	return a * a;
}

int main(){
	int a;
	if(scanf("%d", &a) != 1){
		printf("error\n");
		exit(1);
	}
	printf("%d", square(a));
	return 0;
}
