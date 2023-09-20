#include <stdio.h>
int main(){
	int num1, num2, num3;
	int max;

	printf("서로 다른 세 정수를 입력하세요.");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	max = num1 > num2 ? num1 : num2;
	max = max > num3 ? max : num3;
	printf("가장 큰 수는 %d 임돠", max);
	return 0;
}