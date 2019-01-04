//30120 πËªÛ«ı
#include <stdio.h>
#pragma warning (disable:4996)
int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	((a < b + c && b < a + c && c < a + b) == 1) ? printf("yes\n") : printf("no\n");
}