//30120 �����
#pragma warning (disable:4996)
#include <stdio.h>
int main() {
	int a;
	printf("�������(�ֹι�ȣ ���� 6�ڸ�): ");
	scanf("%d", &a); //��=a%100 ��=(a%10000 - a%10)/100 ���� (a-a%10000)/10000)
	int ang = (((a - a % 10000) / 10000) + (a % 10000 - a % 10) / 100 + a % 100)%10;
	if (ang == 0)
		printf("�������!\n");
	else
		printf("�����ϼ���.\n");
	
}