#include <stdio.h>
int main(void) {
	int a, b, c;
	printf("세 수를 입력하세요: ");
	scanf("%d %d %d", &a, &b, &c);
	printf("세 수의 곱 : %d\n세 수의 평균 : %d\n", a*b*c, (a+b+c)/3);
}