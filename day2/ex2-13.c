#include <stdio.h>
#include <limits.h>
int main(void) {
	long long int i = 3285423984752398743;
	printf("10���� %lld�� 16������ %llX, 8������ %llo �Դϴ�.\n", i, i, i);
	printf("long long int ���� �ִ��� %lld\n", LLONG_MAX);
	(i <= LLONG_MAX) ? printf("��� ����\n") : printf("��� �Ұ���\n");
}