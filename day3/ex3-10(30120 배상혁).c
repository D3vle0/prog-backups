//30120 ¹è»óÇõ
#include <stdio.h>
#pragma warning (disable:4996)
int main() {
	int a;
	printf("¼ö¸¦ ÀÔ·Â: ");
	scanf("%d", &a);
	(a % 2 == 0) ? printf("Â¦¼ö\n") : printf("È¦¼ö\n");
}