#include <stdio.h>
int main() {
	int num,i=1;
	scanf("%d", &num);
	printf("%d�� ����� ",num);
	while (i<=num){
		if (num % i == 0)
			printf("%d ",i);
		i++;
	}
	printf("\b�Դϴ�.\n");
}