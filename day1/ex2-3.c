#include <stdio.h>
#include <Windows.h>
int main() {
	int i = 0;
	//printf ����ڿ� ���
	//�ٹٲ�
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	printf("Hello Sunrin\n");
	printf("Welcome ����\n");
	Sleep(1000);
	//�Ǹ�ŭ ����
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	printf("Hello\tSunrin\n");
	printf("Welcome\t����\n");
	Sleep(1000);
	//�������� ���
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	printf("Hello\\Sunrin\n");
	printf("Welcome\\����\n");
	Sleep(1000);
	//�̱�����, �������� ���
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	printf("\'Hello\' Sunrin\n");
	printf("\"Welcome\" ����\n");
	
}