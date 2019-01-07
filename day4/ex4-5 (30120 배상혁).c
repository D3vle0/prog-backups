//30120 배상혁
#include <stdio.h>
#pragma warning (disable:4996)
int main() {
	int a, b;
	printf("정수 A : ");
	scanf("%d", &a);
	printf("정수 B : ");
	scanf("%d", &b);
	if (b >= a){
		printf("-----Output-----\n");
		printf("%d을 %d으로 나누면 몫은 %d이고\n나머지는 %d입니다.\n", b, a, b / a, b%a);
		printf("--------------\n");
	}
	else {
		printf("-----Output-----\n");
		printf("%d을 %d으로 나누면 몫은 %d이고\n나머지는 %d입니다.\n", a, b, a/b, a%b);
		printf("--------------\n");
	}
}