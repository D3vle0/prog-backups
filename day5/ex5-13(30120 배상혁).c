#include <stdio.h>
int main() {
	int i = 1, sum = 0;
	do{
		sum += i;
		i++;
		if (sum >= 100)
			break;
	} while (1);
	printf("%d\n", i);
}