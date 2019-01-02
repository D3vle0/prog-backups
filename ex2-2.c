#include <stdio.h>
#include <limits.h>
int main() {
	//자료형의 표현 범위 확인
	int a;
	a = INT_MAX - 1;
	a += 1; //2^31 - 1
	printf("%d\n", a);
	a += 1;
	printf("%d\n", a); // 이런 현상을 Overflow 라고 함. (Basis of Y38K Error)

	return 0;
}