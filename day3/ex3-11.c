#include <stdio.h>
#pragma warning (disable:4996)
int main() {
	int x, y, z, max;
	printf("�� ���� ���� �Է�: ");
	scanf("%d %d %d", &x, &y, &z);
	max = (x > y) ? x : y;
	max = (max > z) ? max : z;
	printf("���� ū ����: %d\n", max);
}