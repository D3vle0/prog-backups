#include <stdio.h>
#pragma warning (disable:4996)
int main() {
	int a,sum=0;
	scanf("%d", &a);
	for (int i = 1; i < a; i++){
		if (a%i == 0)
			sum += i;
	}
	if (sum == a)
		printf("완전수입니다.\n");
	else
		printf("완전수가 아닙니다.\n");
}