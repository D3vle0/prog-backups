#include <stdio.h>
#include <ctype.h>
int main() {
	char c;
	printf("���ĺ� ���� �Է� : ");
	scanf("%c", &c);
	if (c >= 65 && c <= 90)
		printf("%c\n", tolower(c));
	else
		printf("%c\n", toupper(c));
}