#include <stdio.h>
#include <string.h>
int main() {
	char id[10] = "sunrin", pass[10] = "test111";
	char user_id[10], user_p[10];
	int i = 0; int num = 0;
	do {
		printf("���̵� �Է�: ");
		scanf("%s", user_id);
		printf("��й�ȣ �Է�: ");
		scanf("%s", user_p);
		if (num >= 4){
			printf("�α��� ����� 5�а� �����Ǿ����ϴ�.\n");
			break;
		}
		else if (!(strcmp(user_id, id) == 0)){
			printf("�ٽ� �Է��ϼ���.\n");
			num++;
		}
		else if (!(strcmp(user_p, pass) == 0)){
			printf("�ٽ� �Է��ϼ���.\n");
			num++;
		}
		else {
			printf("�α����ϼ̽��ϴ�.\n");
			break;
		}
		
	} while (num <= 4);

}