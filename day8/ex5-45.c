#include <stdio.h>
int main() {
	int i, j, n;
	printf("n을 입력해주세요!\n");
	scanf("%d", &n);
	for (i = 0; i < n-1; i++){
		for (j = 0; j <= i; j++)
			printf("*");
		printf("\n");
	}
	for (i = n; i > 0; i--){
		for (j = 0; j < i; j++)
			printf("*");
		printf("\n");
	}
}