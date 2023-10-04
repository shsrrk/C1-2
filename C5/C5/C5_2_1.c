#include <stdio.h>
int main2(){
	int s;
	for (int i = 0;; i++){
	printf("정수를 입력하세요");
	printf("\n");
	scanf_s("%d", &s);

		if (s == 0) {
			return 0;
		}

		while (s%2 == 1){
			printf("홀수여~!");
			printf("\n");
			printf("\n");
			break;
		}

		while (s%2 == 0) {
			printf("짝수여~!");
			printf("\n");
			printf("\n");
			break;
		}

	}



	
}