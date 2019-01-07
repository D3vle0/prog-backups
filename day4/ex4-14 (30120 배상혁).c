//30120 배상혁
#pragma warning (disable:4996)
#include <stdio.h>
int main() {
	int car,day;
	printf("차량번호: ");
	scanf("%d", &car);
	printf("당일 일: ");
	scanf("%d", &day);
	if ((car % 10) == (day % 10))
		printf("오늘은 차량운행이 불가능 합니다.\n");
	else
		printf("오늘은 차량운행이 가능합니다.\n");
}
