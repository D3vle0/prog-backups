#include <stdio.h>
int main(){
	int a, b, i = 1;
	scanf("%d %d", &a, &b);
	printf("%d 와 %d의 공약수는 ", a, b);
	while (i<=a || i <= b){
		if (a%i==0 && b%i==0)
			printf("%d ", i);
		i++;
	}
	printf("입니다.\n");
}