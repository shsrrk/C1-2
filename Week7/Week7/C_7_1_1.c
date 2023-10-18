#include <stdio.h>
int main1() {
	int num;
	int a = 0, b = 0, c = 0;
	printf("수를 입력하시와요");
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++){
		c = a + b;
		b = a;
		a = c;
	}

	printf("입력하신 항의 수는 %d 입니다.", a);

}