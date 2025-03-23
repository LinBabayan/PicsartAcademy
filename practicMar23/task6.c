#include <stdio.h>
#include <stdlib.h>

int main(){
	 printf("enter n: ");
	 int n;
	 if(scanf("%d", &n) != 1){
	 	perror("error\n");
	 	exit(1);
	 }
	 
	 if(n <= 0){
	 	printf("error\n");
	 	exit(0);
	 }
	 
	 if((n & (n - 1)) == 0)
	 	printf("power of 2\n");
	 else
	 	printf("not power of 2\n");
	 return 0;

}
