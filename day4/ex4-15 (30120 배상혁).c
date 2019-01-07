//30120 배상혁
#pragma warning (disable:4996)
#include <stdio.h>
int main() {
	int a;
	printf("생년월일(주민번호 앞의 6자리): ");
	scanf("%d", &a); //일=a%100 월=(a%10000 - a%10)/100 연도 (a-a%10000)/10000)
	int ang = (((a - a % 10000) / 10000) + (a % 10000 - a % 10) / 100 + a % 100)%10;
	if (ang == 0)
		printf("운수대통!\n");
	else
		printf("조심하세요.\n");
	
}