#include <stdio.h>
#pragma warning (disable:4996)
int main() {
	int s;
	printf("�ʸ� �Է��ϼ���: ");
	scanf("%d", &s);
	printf("%d�ʴ� %d�� %d���Դϴ�.\n", s, s/60, s%60);
}