#include <stdio.h>
#include <limits.h>
int main() {
	//�ڷ����� ǥ�� ���� Ȯ��
	int a;
	a = INT_MAX - 1;
	a += 1; //2^31 - 1
	printf("%d\n", a);
	a += 1;
	printf("%d\n", a); // �̷� ������ Overflow ��� ��. (Basis of Y38K Error)

	return 0;
}