#include <stdio.h>
#include <limits.h>
int main() {
	//�ڷ����� ǥ�� ���� Ȯ��
	int a;
	a = INT_MIN + 1; //���� ������ �� ���� ����� �Է���.
	a -= 1; //-2^31 - 1
	printf("%d\n", a);
	a -= 1;
	printf("%d\n", a); // �̷� ������ Underflow ��� ��.

	return 0;
}