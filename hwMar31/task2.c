#include <stdio.h>

int main(){
	int n;
	printf("enter n: ");
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; ++i)
		scanf("%d", a + i);
	
	int q = 0;
	for(int i = 0; i < n; ++i)
		if(a[i] % 2 != 0)
			++q;
	
	printf("odd num count: %d", q);
	return 0;
}
