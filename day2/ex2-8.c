#include <stdio.h>
int main(void) {
	int basic = 67; //변수 선언
	double ave = 0, c = 54.5;
	ave = (c + basic) / 2.0;
	printf("c: %.2f, basic: %d\n평균: %.2f\n", c, basic, ave);
}