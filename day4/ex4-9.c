//30120 �����
#include <stdio.h>
#include <math.h>
int main() {
	double w, h;
	printf("������ (kg) : ");
	scanf("%lf", &w);
	printf("Ű (cm) : ");
	scanf("%lf", &h);
	double bmi = w / pow(h / 100, 2);
	if (bmi >= 30)
		printf("�ߵ��\n");
	else if (bmi >= 25)
		printf("�浵��\n");
	else if (bmi >= 23)
		printf("��ü��\n");
	else if (bmi >= 18.5)
		printf("����\n");
	else
		printf("��ü��\n");
}