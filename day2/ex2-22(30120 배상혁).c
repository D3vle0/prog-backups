#include <stdio.h>
int main(void) {
	int m;
	printf("분을 입력하세요 : ");
	scanf("%d", &m);
	(1 <= m && m <= 60) ? printf("%d minutes is %d seconds.\n", m, m * 60) : printf("\n");
	//삼항연산자
}