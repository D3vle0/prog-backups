#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	int rand1, rand2, rand3, rand4;
	srand(time(NULL));
	printf("´øÁ®¶ó À·\n");
	rand1 = rand() % 2;
	rand2 = rand() % 2;
	rand3 = rand() % 2;
	rand4 = rand() % 2;
	printf("%d %d %d %d\n", rand1, rand2, rand3, rand4);
	if (rand1 + rand2 + rand3 + rand4 == 1)
		printf("µµ\n");
	else if (rand1 + rand2 + rand3 + rand4 == 2)
		printf("°³\n");
	else if (rand1 + rand2 + rand3 + rand4 == 3)
		printf("°É\n");
	else if (rand1 + rand2 + rand3 + rand4 == 4)
		printf("À·\n");
	else
		printf("¸ğ\n");
}