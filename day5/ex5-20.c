#include <stdio.h>
int main(){
	int i, sum = 0;
	for (i = 1; i < 20; i++){
		if (i % 3 == 0){
			printf("%3d", i);
			sum += i;
		}
	}
	printf("\n%3d\n", sum);
}