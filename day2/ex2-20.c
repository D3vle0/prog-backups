#include <stdio.h>
int main(void) {
	char name[30], belong[30];
	int age, pay;
	printf("이름 : ");
	scanf("%s", name);
	printf("소속 : ");
	scanf("%s", belong);
	printf("나이 : ");
	scanf("%d", &age);
	printf("용돈 : ");
	scanf("%d", &pay);

	printf("%s에 재학중이며,\n나이는 %d세인 %s입니다.\n용돈은 한달에 %d원입니다.\n", belong, age, name, pay);
}