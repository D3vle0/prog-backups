/* 30120 ����� ��������� �ǽ� */
#include <stdio.h>
#pragma warning (disable:4996)
int main() {
	int a, b;
	printf("a, b �Է�: ");
	scanf("%d %d", &a, &b);
	printf("��: %d\n��: %d\n��: %d\n��: %.2f\n������: %d\n", a + b, a - b, a*b, (double)a/b, a%b);
}