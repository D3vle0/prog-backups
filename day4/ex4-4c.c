#include <stdio.h>
#pragma warning (disable:4996)
int main() {
	int x;
	printf("XÀÇ °ª: ");
	scanf("%d", &x);
	if (x >= 2)
		printf("x(%d) = %d\n", x, x - 2);
	else
		printf("x(%d) = %d\n", x, -x + 2);
}