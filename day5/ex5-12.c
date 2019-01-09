#include <stdio.h>
int main() {
	int i = 0, j = 0, k = 1;
	while (i == 0){
		while (j == 0){
			while (k == 1){
				break;
			}
			printf("j\n");
			break;
		}
		printf("i\n");
	}
}