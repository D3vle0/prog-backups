#include <stdio.h>
#pragma warning (disable:4996)
int main(){
	int rank;
	printf("��� �Է�: ");
	scanf("%d", &rank);
	switch (rank)
	{
	case 1: printf("�ݻ�\n"); break;
	case 2: printf("����\n"); break;
	case 3: printf("����\n"); break;
	default: printf("�Ի�\n"); break;
	}
}