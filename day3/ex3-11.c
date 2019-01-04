#include <stdio.h>
#pragma warning (disable:4996)
int main() {
	int x, y, z, max;
	printf("세 개의 정수 입력: ");
	scanf("%d %d %d", &x, &y, &z);
	max = (x > y) ? x : y;
	max = (max > z) ? max : z;
	printf("가장 큰 수는: %d\n", max);
}