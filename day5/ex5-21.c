#include <stdio.h>
int main(){
	int i, sum = 0;
	for (i = 1; i <= 10; i++){
		sum += i;
		if (sum > 10)
			break;
	}
	printf("%3d %3d\n", i, sum);
}