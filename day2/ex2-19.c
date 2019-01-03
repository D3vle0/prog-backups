#include <stdio.h>
#include <ctype.h>
int main(void) {
	char a,b;
	
	printf("알파벳 소문자를 입력: ");
	scanf("%c", &a);
	printf("%c\n", a - 32);
	/*
	scanf("%c", &b);
	b = toupper(b);
	printf("%c", b);
	*/
}