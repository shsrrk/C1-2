#include <stdio.h>
int main3() {
	int num;
	printf("점수를 입력하라");
	scanf_s("%d", &num);

	switch (num/10){
		case 10 :
		case 9:
			printf("A");
			break;

		case 8:
			printf("B");
			break;

		case 7:
			printf("C");
			break;

		default:
			printf("F");
			break;
	}
	return 0;
}