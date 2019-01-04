#include <stdio.h>
#pragma warning (disable:4996)
int main() {
	int a,b,c;
	printf("수를 입력: ");
	scanf("%d", &a);
	a *= 10;
	printf("10 곱한 수 : %d\n", a);
	a /= 100;
	printf("10 나눈 수 : %d\n", a);
}