#include <stdio.h>
int main(void) {
	int m;
	printf("���� �Է��ϼ��� : ");
	scanf("%d", &m);
	(1 <= m && m <= 60) ? printf("%d minutes is %d seconds.\n", m, m * 60) : printf("\n");
	//���׿�����
}