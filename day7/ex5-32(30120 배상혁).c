#include <stdio.h>
#pragma warning (disable:4996)
int main(){
	int i = 0;
	int farmer[100] = {0};
	int num=0, max=0, max2=0;
	printf("농부의 수는? ");
	scanf("%d", &num);
	for (i = 0; i < num; i++){
		scanf("%d", &farmer[i]);
		if (farmer[i] > max){
			max = farmer[i];
			max2=i;
		}
	}
	printf("가장 부지런한 농부는 %d번째 농부입니다.\n", max2+1);
}