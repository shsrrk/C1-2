//#include <stdio.h>
//int main1() {
//	int arr[5];
//	int* p = arr;
//	double a, b, c, sum;
//	printf("국어 영어 수학 점수를 입력하시오");
//
//	scanf_s("%lf %lf %lf", &a, &b, &c);
//
//	for (int i = 0; i < 3; i++){
//		scanf_s("%lf", &p[i]);
//		p[3] = p[3] + p[i];
//	}
//	p[4] = p[3] / 3;
//
//	for (int i = 0; i < 3; i++) {
//		printf("%lf\n", *(p+i));
//	}
//
//	printf("총점: %lf, 평균: %lf", * (p + 3), arr[4]);
//}