#pragma warning (disable:4996)
int main(void) {
	char a;
	printf("문자: ");
	scanf("%c", &a);
	printf("%c 다음 문자는 %c 이다.\n", a, a+1);
}
