//30120 배상혁
#include <stdio.h>
#pragma warning (disable:4996)
int main() {
	int pw;
	printf("비밀번호 : ");
	scanf("%d", &pw);
	if (pw == 1234)
		printf("비밀번호가 맞습니다.\n");
	else
		printf("비밀번호가 다릅니다.\n");
}