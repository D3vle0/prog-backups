//�̿ϼ�
#include <stdio.h>
int main() {
	int n;
	int i, j, k;
	scanf("%d", &n);
	for (i = n; i >= 1; i--){
		for (j = 0; j < n - i; j++)
			printf(" ");

		for (k = 0; k < i * 2 - 1; k++)
			printf("*");

		printf("\n");
	}
	for (i = 2; i <= n; i++){
		for (j = 0; j < n - i; j++)
			printf(" ");
		for (k = 0; k < i * 2 - 1; k++)
			printf("*");
		printf("\n");
	}
}