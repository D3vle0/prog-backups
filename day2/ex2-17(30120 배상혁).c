#include <stdio.h>
int main(void) {
	double a, b;
	printf("�Ǽ� 1: ");
	scanf("%lf", &a);
	printf("�Ǽ� 2: ");
	scanf("%lf", &b);
	printf("����: %.2f\n���: %.2f\n", a + b, (a+b)/2.0);
}