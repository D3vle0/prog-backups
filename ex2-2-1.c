#include <stdio.h>
#include <limits.h>
int main() {
	//자료형의 표현 범위 확인
	int a;
	a = INT_MIN + 1; //기존 수업은 이 값을 상수로 입력함.
	a -= 1; //-2^31 - 1
	printf("%d\n", a);
	a -= 1;
	printf("%d\n", a); // 이런 현상을 Underflow 라고 함.

	return 0;
}