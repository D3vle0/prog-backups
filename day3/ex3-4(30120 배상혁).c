//30120 배상혁
#include <stdio.h>
#pragma warning (disable:4996)
int main() {
	int a;
	printf("세 자리 정수: ");
	scanf("%d", &a);
	printf("100의 자리수: %d\n10의 자리수: %d\n1의 자리수: %d\n", a / 100, (a%100)/10, a % 10);
}