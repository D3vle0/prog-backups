#include <stdio.h>
int main(){
	int i, odd, even;
	odd = even = 0;
	for (i = 1; i <= 100; i++){
		if (i % 2 == 1)
			odd += i;
		else
			even += i;
	}
	printf("Ȧ��=%d, ¦��=%d\n", odd, even);
}