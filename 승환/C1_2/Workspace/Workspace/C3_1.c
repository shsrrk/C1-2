#include <stdio.h>

int main1() {
	double num1, num2;
	int d;
	printf("실수를 입력하세요");
	scanf_s("%lf", &num1);

	d = num1;
	num2 = num1 - d;

	printf("입력하신 값의 정수 부분은 %d 이고 실수부분은 %.2f 입니다.", d, num2);
}