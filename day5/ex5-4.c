#include <stdio.h>
int main() {
	int i = 1;
	scanf("%d", &i);
	while (i > 0){
		printf("%d ", i);
		i -= 2;
	}
}