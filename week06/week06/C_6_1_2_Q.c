#include <stdio.h>
int main3() {
	int num, a = 0;

	scanf_s("%d", &num);

	for (int i = 1; i < num + 1; i++) {
		if (num % i == 0) {
			a += 1;
		}
		  //return 0;�� ��
	}
	if (a == 2) {
		printf("�Ҽ���~");
	}
	if (a != 2) {
		printf("�Ҽ��� �Ƴ�~");
	}
}