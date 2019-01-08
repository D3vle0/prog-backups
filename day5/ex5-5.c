#include <stdio.h>
int main() {
	int i= 2;
	int n, sum;
	scanf("%d", &n);
	while (i <= n){
		sum += i;
		i += 2;
	}
	printf("1부터 %d 까지의 짝수의 합은 %d 입니다.", n, sum);
}