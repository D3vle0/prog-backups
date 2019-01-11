#include <stdio.h>
int main() {
	int a,i,j;
	scanf("%d", &a);
	for (i = 0; i < a / 2 + 1; i++){
		for (j = 0; j < a - i; j++)
			printf(" ");
		for (j = 0; j < i * 2 + 1; j++)
			printf("*");
		printf("\n");
	}
}