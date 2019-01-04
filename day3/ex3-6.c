#include <stdio.h>
#pragma warning (disable:4996)
int main() {
	int a = 10, b = 5;
	printf("크다? = %d\n", a > b);
	printf("크거나 같다? = %d\n", a >= b);
	printf("작다 = %d\n", a < b);
	printf("작거나 같다 = %d\n", a <= b);
	printf("같다? = %d\n", a == b);
	printf("같지 않다? = %d\n", a != b);
}