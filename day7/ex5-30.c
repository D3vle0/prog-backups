#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	int rand1, rand2, rand3, rand4;
	srand(time(NULL));
	printf("������ ��\n");
	rand1 = rand() % 2;
	rand2 = rand() % 2;
	rand3 = rand() % 2;
	rand4 = rand() % 2;
	printf("%d %d %d %d\n", rand1, rand2, rand3, rand4);
	if (rand1 + rand2 + rand3 + rand4 == 1)
		printf("��\n");
	else if (rand1 + rand2 + rand3 + rand4 == 2)
		printf("��\n");
	else if (rand1 + rand2 + rand3 + rand4 == 3)
		printf("��\n");
	else if (rand1 + rand2 + rand3 + rand4 == 4)
		printf("��\n");
	else
		printf("��\n");
}