#pragma warning (disable:4996) //내가 추가함
#include <stdio.h>
int main(void) {
	int height;
	double weight;

	printf("신장 입력: ");
	scanf("%d", &height);
	printf("체중 입력: ");
	scanf("%lf", &weight);
	printf("\n입력된 신장 = %dcm", height);
	printf("\n입력된 체중 = %.2fkg\n", weight);
}