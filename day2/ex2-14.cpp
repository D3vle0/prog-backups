#pragma warning (disable:4996) //���� �߰���
#include <stdio.h>
int main(void) {
	int height;
	double weight;

	printf("���� �Է�: ");
	scanf("%d", &height);
	printf("ü�� �Է�: ");
	scanf("%lf", &weight);
	printf("\n�Էµ� ���� = %dcm", height);
	printf("\n�Էµ� ü�� = %.2fkg\n", weight);
}