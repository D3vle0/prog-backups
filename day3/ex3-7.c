//30120 �����
#include <stdio.h>
#pragma warning (disable:4996)
int main() {
	int h, result;
	printf("���� �Է�: ");
	scanf("%d", &h);
	printf("3�Ǵ� 5�� ���������� ���ΰ�?\n%d\n", h%3==0||h%5==0);
}