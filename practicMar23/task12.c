#include <stdio.h>
#include <stdlib.h>

int main(){
	int op, a, b;
	printf ("enter operation, value1 and value2: ");
	if(scanf("%d %d %d", &op, &a, &b) != 3){
		perror("error\n");
		exit(1);
	}
	switch (op){
	case 1:
		printf("%d\n", a & b);
		break;
	case 2: 
		printf("%d\n", a | b);
		break;
	case 3: 
		printf("%d\n", a ^ b);
		break;
	case 4: 
		printf("%d %d\n", ~a, ~b);
		break;
	case 5:
		printf("%d %d\n", a >> b, a << b);
		break;
	default:
		printf("ivalid input\n");
	}
	return 0;
}
