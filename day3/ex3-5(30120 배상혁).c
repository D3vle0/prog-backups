//30120 �����
#include <stdio.h>
#include <math.h>
#pragma warning (disable:4996)
int main() {
	double height, weight;
	printf("���� �Է� (cm): ");
	scanf("%lf", &height);
	printf("������ �Է� (kg): ");
	scanf("%lf", &weight);
	printf("����� BMI ������ %.3f �Դϴ�.", weight / pow(height / 100, 2));
}