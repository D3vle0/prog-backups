#include <stdio.h>
int main(){
	int i;
	
	do{
		printf("���� �ڵ带 �Է��ϼ���.\n");
		printf("1: ���α׷���, 2: �ü��, 3: ��Ʈ��ũ ����, 0: ����\n");
		scanf("%d", &i);
		if (i == 1){
			printf("���α׷����� �� �������?\n");
		}
		else if (i == 2 || i == 3){
			printf("���α׷����� �� �������?\n");
		}
	} while (i);
}