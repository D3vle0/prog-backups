//30120 �����
#include <stdio.h>
#pragma warning (disable:4996)
int main() {
	int a;
	printf("�� �ڸ� ����: ");
	scanf("%d", &a);
	printf("100�� �ڸ���: %d\n10�� �ڸ���: %d\n1�� �ڸ���: %d\n", a / 100, (a%100)/10, a % 10);
}