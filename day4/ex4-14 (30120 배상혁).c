//30120 �����
#pragma warning (disable:4996)
#include <stdio.h>
int main() {
	int car,day;
	printf("������ȣ: ");
	scanf("%d", &car);
	printf("���� ��: ");
	scanf("%d", &day);
	if ((car % 10) == (day % 10))
		printf("������ ���������� �Ұ��� �մϴ�.\n");
	else
		printf("������ ���������� �����մϴ�.\n");
}
