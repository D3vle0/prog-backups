#include <stdio.h>
int main(void) {
	char name[30], belong[30];
	int age, pay;
	printf("�̸� : ");
	scanf("%s", name);
	printf("�Ҽ� : ");
	scanf("%s", belong);
	printf("���� : ");
	scanf("%d", &age);
	printf("�뵷 : ");
	scanf("%d", &pay);

	printf("%s�� �������̸�,\n���̴� %d���� %s�Դϴ�.\n�뵷�� �Ѵ޿� %d���Դϴ�.\n", belong, age, name, pay);
}