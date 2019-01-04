//30120 배상혁
#include <stdio.h>
#include <math.h>
#pragma warning (disable:4996)
int main() {
	double height, weight;
	printf("신장 입력 (cm): ");
	scanf("%lf", &height);
	printf("몸무게 입력 (kg): ");
	scanf("%lf", &weight);
	printf("당신의 BMI 지수는 %.3f 입니다.", weight / pow(height / 100, 2));
}