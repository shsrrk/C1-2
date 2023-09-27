#include <stdio.h>
int main2(void) {
	printf("점수를 입력하세요");
	int num;
	scanf_s("%d",&num);

	if (num <= 100 && num >= 90) {
		printf("A");
	}
	else if (num <= 89 && num >= 80) {
		printf("B");
	}
	else{
		printf("노오력을 하세요");
	}

	return 0;
}