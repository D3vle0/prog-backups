#include <stdio.h>
#pragma warning (disable:4996)
int main(){
	int i = 0;
	int farmer[100] = {0};
	int num=0, max=0, max2=0;
	printf("����� ����? ");
	scanf("%d", &num);
	for (i = 0; i < num; i++){
		scanf("%d", &farmer[i]);
		if (farmer[i] > max){
			max = farmer[i];
			max2=i;
		}
	}
	printf("���� �������� ��δ� %d��° ����Դϴ�.\n", max2+1);
}