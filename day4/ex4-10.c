#include <stdio.h>
#pragma warning (disable:4996)
int main(){
	int rank;
	printf("등수 입력: ");
	scanf("%d", &rank);
	switch (rank)
	{
	case 1: printf("금상\n"); break;
	case 2: printf("은상\n"); break;
	case 3: printf("동상\n"); break;
	default: printf("입상\n"); break;
	}
}