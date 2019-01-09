#include <stdio.h>
int main(){
	int i = 0, j = 0, k = 1;
	while (i == 0){
		while (j == 0){
			printf("j에 대한 while 문\n");
			if (k == 1)
				continue;
		}
		printf("i에 대한 while 문\n");

	}
}