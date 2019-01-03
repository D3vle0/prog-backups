#include <stdio.h>
int main(void) {
	char a;
	printf("알파벳 소문자를 입력: ");
	scanf("%c", &a);
	printf("%c\n", a - 32);
}