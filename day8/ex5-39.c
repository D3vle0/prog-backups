#include <stdio.h>
int main() {
	int a,num=0;
	scanf("%d", &a);
	for (int i = 1; i <= a; i++)
		if (a%i == 0)
			num++;
	(num == 2) ? printf("prime\n") : printf("not prime\n");
}