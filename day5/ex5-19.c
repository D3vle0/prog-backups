#include <stdio.h>
int main(){
	int i, n = 0;
	for (i = 1; i <= 10; i++){
		if (i % 2 == 1)
			n++;
	}
	printf("%3d\n", n);
}