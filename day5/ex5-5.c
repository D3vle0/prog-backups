#include <stdio.h>
int main() {
	int i= 2;
	int n, sum;
	scanf("%d", &n);
	while (i <= n){
		sum += i;
		i += 2;
	}
	printf("1���� %d ������ ¦���� ���� %d �Դϴ�.", n, sum);
}