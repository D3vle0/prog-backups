#include <stdio.h>
int main() {
	int i = 0;
	while (i < 20){
		i += 2;
		if (i % 3 == 0)
			continue;
		printf("%3d", i);
	}
}