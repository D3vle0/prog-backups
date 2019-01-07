//30120 배상혁
#include <stdio.h>
#include <math.h>
int main() {
	double w, h;
	printf("몸무게 (kg) : ");
	scanf("%lf", &w);
	printf("키 (cm) : ");
	scanf("%lf", &h);
	double bmi = w / pow(h / 100, 2);
	if (bmi >= 30)
		printf("중등도비만\n");
	else if (bmi >= 25)
		printf("경도비만\n");
	else if (bmi >= 23)
		printf("과체중\n");
	else if (bmi >= 18.5)
		printf("정상\n");
	else
		printf("저체중\n");
}