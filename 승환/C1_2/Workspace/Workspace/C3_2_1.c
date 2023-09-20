#include <stdio.h>
int main2() {
	double num1, num2;
	int d1, d2;

	printf("실수를 입력하세요");
	scanf_s("%lf %lf", &num1, &num2);

	num1 = d1;
	num1 = num1 - d1;
	num2 = (int)d2;
	num2 = num2 - d2;

	printf("입력하신 값의 실수 부분의 덧셈은 %2.2f 입니다.", num1 + num2);
	return 0;
}