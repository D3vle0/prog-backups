#include <stdio.h>
#pragma warning (disable:4996)
int main() {
	int a,sum=0;
	scanf("%d", &a);
	for (int i = 1; i < a; i++){
		if (a%i == 0)
			sum += i;
	}
	if (sum == a)
		printf("�������Դϴ�.\n");
	else
		printf("�������� �ƴմϴ�.\n");
}