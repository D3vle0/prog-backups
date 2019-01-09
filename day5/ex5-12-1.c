#include <stdio.h>
int main() {
	int i = 20;
	while (i > 0){
		printf("%3d", i);
		i -= 2;
		if (i % 7 == 0){
			break;
		}
	}
}