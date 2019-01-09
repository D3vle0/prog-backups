#include <stdio.h>
int main(){
	int i;
	
	do{
		printf("과목 코드를 입력하세요.\n");
		printf("1: 프로그래밍, 2: 운영체제, 3: 네트워크 기초, 0: 종료\n");
		scanf("%d", &i);
		if (i == 1){
			printf("프로그래밍은 참 재미있죠?\n");
		}
		else if (i == 2 || i == 3){
			printf("프로그래밍이 더 재미있죠?\n");
		}
	} while (i);
}