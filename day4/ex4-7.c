//30120 배상혁
#include <stdio.h>
#include <limits.h>
#pragma warning (disable:4996)
int main() {
	int a;
	scanf("%d", &a);
	/*
		if (a >= 0){
			if (a == 0){
				printf("0입니다.\n");
				return 0;
			}
			printf("양수입니다\n");
		}
		else
			printf("음수입니다.");
	*/

	if (a > 0)
		printf("양수입니다.\n");
	else if (a == 0)
		printf("0입니다.\n");
	else
		printf("음수입니다.\n");
}