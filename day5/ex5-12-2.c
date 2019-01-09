#include <stdio.h>
int main() {
	int i = 0;
	do{
		printf("%d", i++); 
		if (i == 4)
			break;
	} while (1);
}