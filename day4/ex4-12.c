#include <stdio.h>
int main() {
	int kor, eng, com;
	char grade='F';
	printf("���� ���� ���� ������ �Է��Ͻÿ� -> ");
	scanf("%d %d %d", &kor, &eng, &com);

	switch ((kor + eng + com) / 30){
	case 10:
	case 9: grade = 'A'; break;
	case 8: grade = 'B'; break;
	case 7: grade = 'C'; break;
	case 6: grade = 'D'; break;
	case 5: grade = 'E'; break;
	default:
		break;
	}
	printf("����: %d\n���: %.2f\n����: %c\n", kor + eng + com, (double)(kor + eng + com) / 3, grade);
}