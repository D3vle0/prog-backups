//30120 �����
#include <stdio.h>
#pragma warning (disable:4996)
int main() {
	int a, b;
	printf("���� A : ");
	scanf("%d", &a);
	printf("���� B : ");
	scanf("%d", &b);
	if (b >= a){
		printf("-----Output-----\n");
		printf("%d�� %d���� ������ ���� %d�̰�\n�������� %d�Դϴ�.\n", b, a, b / a, b%a);
		printf("--------------\n");
	}
	else {
		printf("-----Output-----\n");
		printf("%d�� %d���� ������ ���� %d�̰�\n�������� %d�Դϴ�.\n", a, b, a/b, a%b);
		printf("--------------\n");
	}
}