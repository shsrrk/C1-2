#include <stdio.h>
int main2(void) {
	printf("������ �Է��ϼ���");
	int num;
	scanf_s("%d",&num);

	if (num <= 100 && num >= 90) {
		printf("A");
	}
	else if (num <= 89 && num >= 80) {
		printf("B");
	}
	else{
		printf("������� �ϼ���");
	}

	return 0;
}