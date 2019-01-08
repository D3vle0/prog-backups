#include <stdio.h>
#include <stdlib.h>
int main(){
	system("color 0a");
	int a;
	scanf("%d", &a);
	while (a>=1){
		printf("%d ", a);
		a--;
	}
	printf("\n");
}