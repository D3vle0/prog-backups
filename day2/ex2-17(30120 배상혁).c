#include <stdio.h>
int main(void) {
	double a, b;
	printf("½Ç¼ö 1: ");
	scanf("%lf", &a);
	printf("½Ç¼ö 2: ");
	scanf("%lf", &b);
	printf("ÃÑÁ¡: %.2f\nÆò±Õ: %.2f\n", a + b, (a+b)/2.0);
}