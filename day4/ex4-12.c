#include <stdio.h>
int main() {
	int kor, eng, com;
	char grade='F';
	printf("국어 영어 전산 점수를 입력하시오 -> ");
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
	printf("총점: %d\n평균: %.2f\n학점: %c\n", kor + eng + com, (double)(kor + eng + com) / 3, grade);
}