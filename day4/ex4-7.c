//30120 �����
#include <stdio.h>
#include <limits.h>
#pragma warning (disable:4996)
int main() {
	int a;
	scanf("%d", &a);
	/*
		if (a >= 0){
			if (a == 0){
				printf("0�Դϴ�.\n");
				return 0;
			}
			printf("����Դϴ�\n");
		}
		else
			printf("�����Դϴ�.");
	*/

	if (a > 0)
		printf("����Դϴ�.\n");
	else if (a == 0)
		printf("0�Դϴ�.\n");
	else
		printf("�����Դϴ�.\n");
}