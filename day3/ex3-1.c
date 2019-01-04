/* 30120 배상혁 산술연산자 실습 */
#include <stdio.h>
#pragma warning (disable:4996)
int main() {
	int a, b;
	printf("a, b 입력: ");
	scanf("%d %d", &a, &b);
	printf("합: %d\n차: %d\n곱: %d\n몫: %.2f\n나머지: %d\n", a + b, a - b, a*b, (double)a/b, a%b);
}