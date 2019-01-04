//30120 배상혁
#include <stdio.h>
#pragma warning (disable:4996)
int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	((a <= 10000 && b <= 10000 && c <= 10000) == 1) ? ((a < b + c && b < a + c && c < a + b) == 1) ? printf("yes\n") : printf("no\n") : printf("\n");
}
