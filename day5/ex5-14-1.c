#include <stdio.h>
int main(){
	int i = 0, j = 0, k = 1;
	while (i == 0){
		while (j == 0){
			printf("j�� ���� while ��\n");
			if (k == 1)
				continue;
		}
		printf("i�� ���� while ��\n");

	}
}