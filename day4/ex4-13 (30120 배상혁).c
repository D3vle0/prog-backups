//30120 �����
#pragma warning (disable:4996)
#include <stdio.h>
int main() {
	int a, b, c, d;
	printf("a: ");
	scanf("%d", &a);
	printf("b: ");
	scanf("%d", &b);
	printf("c: ");
	scanf("%d", &c);
	printf("d: ");
	scanf("%d", &d);
	double x = (double)a / (double)b;
	double y = (double)c / (double)d;
	if (x < y)
		printf("%d/%d�� %d/%d ���� �۴�.\n", a, b, c, d);
	else
		printf("%d/%d�� %d/%d ���� ũ��.\n", a, b, c, d);
}