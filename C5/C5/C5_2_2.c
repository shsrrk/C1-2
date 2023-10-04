#include <stdio.h>
int main3() {
	int s;
	do {
		printf("정수를 입력하세요");
		printf("\n");
		scanf_s("%d", &s);
			if (s%2 == 0) {
				printf("짝수여~!");
				printf("\n");
			}
			if (s%2 == 1) {
				printf("홀수여~!");
				printf("\n");
			}

	} while (s != 0);
	return 0;



}