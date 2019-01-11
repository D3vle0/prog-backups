#include <stdio.h>
int main() {
	int n, num=0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++){
		if (i % 10 == 1)
			num++;
	}
	printf("%d\n", num);
}