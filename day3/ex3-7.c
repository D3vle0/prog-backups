//30120 배상혁
#include <stdio.h>
#pragma warning (disable:4996)
int main() {
	int h, result;
	printf("숫자 입력: ");
	scanf("%d", &h);
	printf("3또는 5로 나누어지는 수인가?\n%d\n", h%3==0||h%5==0);
}