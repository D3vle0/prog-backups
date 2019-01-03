#include <stdio.h>
#include <limits.h>
int main(void) {
	long long int i = 3285423984752398743;
	printf("10진수 %lld는 16진수로 %llX, 8진수로 %llo 입니다.\n", i, i, i);
	printf("long long int 형의 최댓값은 %lld\n", LLONG_MAX);
	(i <= LLONG_MAX) ? printf("계산 가능\n") : printf("계산 불가능\n");
}