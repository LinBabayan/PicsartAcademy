#include <stdio.h>
#include <stdlib.h>

int main(){
	char c;
	printf("enter char: ");
	if(scanf("%c", &c) != 1){
		perror("error\n");
		exit(1);
	}
	if(c >= 'a' && c <= 'z')
		printf("%c\n", c & ~32);
	if(c >= 'A' && c <= 'Z')
		printf("%c\n", c | 32);
	return 0;
}
