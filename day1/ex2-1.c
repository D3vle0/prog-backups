#include <stdio.h>
#include <limits.h>
#include <float.h>
int main() {
	int a = 0;
	double b = 0;
	float c = 0;
	char d;

	printf("������ ũ��: %d\n", sizeof(a));
	printf("int �� �ִ밪: %d\n", INT_MAX); //���� �߰���
	printf("�Ǽ�(double)�� ũ��: %d\n", sizeof(b));
	printf("double �� �ִ�: %f\n", DBL_MAX);//���� �߰���
	printf("�Ǽ� (float) �� ũ��: %d\n", sizeof(c));
	printf("float �� �ִ�: %f\n", FLT_MAX);//���� �߰���
	printf("���� (char) �� ũ��: %d\n", sizeof(d));
	printf("char �� �ִ�: %d\n", SCHAR_MAX);//���� �߰���

	return 0;
}