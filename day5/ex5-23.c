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
	printf("È¦¼ö=%d, Â¦¼ö=%d\n", odd, even);
}