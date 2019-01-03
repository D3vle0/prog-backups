#include <stdio.h>
#include <Windows.h>
int main() {
	int i = 0;
	//printf 제어문자와 기능
	//줄바꿈
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	printf("Hello Sunrin\n");
	printf("Welcome 선린\n");
	Sleep(1000);
	//탭만큼 띄우기
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	printf("Hello\tSunrin\n");
	printf("Welcome\t선린\n");
	Sleep(1000);
	//역슬래시 출력
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	printf("Hello\\Sunrin\n");
	printf("Welcome\\선린\n");
	Sleep(1000);
	//싱글쿼터, 더블쿼터 출력
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	printf("\'Hello\' Sunrin\n");
	printf("\"Welcome\" 선린\n");
	
}