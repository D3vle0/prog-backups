#include <stdio.h>
#include <ctype.h>
int main(void) {
	char a,b;
	
	printf("���ĺ� �ҹ��ڸ� �Է�: ");
	scanf("%c", &a);
	printf("%c\n", a - 32);
	/*
	scanf("%c", &b);
	b = toupper(b);
	printf("%c", b);
	*/
}