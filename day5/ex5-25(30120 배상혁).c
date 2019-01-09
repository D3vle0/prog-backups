#include <stdio.h>
#include <string.h>
int main() {
	char id[10] = "sunrin", pass[10] = "test111";
	char user_id[10], user_p[10];
	int i = 0; int num = 0;
	do {
		printf("아이디 입력: ");
		scanf("%s", user_id);
		printf("비밀번호 입력: ");
		scanf("%s", user_p);
		if (num >= 4){
			printf("로그인 사용이 5분간 금지되었습니다.\n");
			break;
		}
		else if (!(strcmp(user_id, id) == 0)){
			printf("다시 입력하세요.\n");
			num++;
		}
		else if (!(strcmp(user_p, pass) == 0)){
			printf("다시 입력하세요.\n");
			num++;
		}
		else {
			printf("로그인하셨습니다.\n");
			break;
		}
		
	} while (num <= 4);

}