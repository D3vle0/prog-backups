#include <stdio.h>
int main() {
	int avg;
	scanf("%d", &avg);
	if (avg >= 90)
		printf("%d점은 \"수\"\n", avg);
	else if (avg >= 80)
		printf("%d점은 \"우\"\n", avg);
	else if (avg >= 70)
		printf("%d점은 \"미\"\n", avg);
	else if (avg >= 60)
		printf("%d점은 \"양\"\n", avg);
	else
		printf("%d점은 \"가\"\n", avg);
}