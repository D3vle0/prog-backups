#include <stdio.h>
int main() {
	int i, fact2 = 1;
	double fact = 1;
	scanf("%d", &fact2);
	for (i = 1; i <= fact2; i++){
		fact = fact*i;
	}
	printf("%.0f\n", fact);
}