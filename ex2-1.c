#include <stdio.h>
#include <limits.h>
#include <float.h>
int main() {
	int a = 0;
	double b = 0;
	float c = 0;
	char d;

	printf("정수의 크기: %d\n", sizeof(a));
	printf("int 의 최대값: %d\n", INT_MAX); //내가 추가함
	printf("실수(double)의 크기: %d\n", sizeof(b));
	printf("double 의 최댓값: %f\n", DBL_MAX);//내가 추가함
	printf("실수 (float) 의 크기: %d\n", sizeof(c));
	printf("float 의 최댓값: %f\n", FLT_MAX);//내가 추가함
	printf("문자 (char) 의 크기: %d\n", sizeof(d));
	printf("char 의 최댓값: %d\n", SCHAR_MAX);//내가 추가함

	return 0;
}