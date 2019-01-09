#include <stdio.h>
int main(){
	int i = 0;
	for (i = 1; i <= 10; i += 2)
		printf("%3d", i);
	i = 1;
	printf("\n\n");
	while (i <= 10){
		printf("%3d", i);
		i += 2;
	}
	printf("\n");
}