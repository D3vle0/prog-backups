#include <stdio.h>
#pragma warning (disable:4996)
int main() {
	int a,b,c;
	printf("���� �Է�: ");
	scanf("%d", &a);
	a *= 10;
	printf("10 ���� �� : %d\n", a);
	a /= 100;
	printf("10 ���� �� : %d\n", a);
}