#include <stdio.h>
int main() {
	int num,i=1;
	scanf("%d", &num);
	printf("%d의 약수는 ",num);
	while (i<=num){
		if (num % i == 0)
			printf("%d ",i);
		i++;
	}
	printf("\b입니다.\n");
}