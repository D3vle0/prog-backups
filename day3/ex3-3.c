#include <stdio.h>
#pragma warning (disable:4996)
int main() {
	int s;
	printf("초를 입력하세요: ");
	scanf("%d", &s);
	printf("%d초는 %d분 %d초입니다.\n", s, s/60, s%60);
}