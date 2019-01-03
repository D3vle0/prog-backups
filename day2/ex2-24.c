#include <stdio.h>
int main() {
	int a, b, temp;
	printf("A: ");
	scanf("%d", &a);
	printf("B: ");
	scanf("%d", &b);

	temp=b;
	b = a;
	a = temp;
	printf("\nA: %d\nB: %d\n", a, b);
}