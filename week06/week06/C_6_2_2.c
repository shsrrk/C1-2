#include <stdio.h>
int main() {
	int num1, num2;
	printf("X ��ǥ�� �Է��Ͻÿ�\n"); 
	scanf_s("%d", &num1);
	printf("Y ��ǥ�� �Է��Ͻÿ�\n");
	scanf_s("%d", &num2);


	if (num1 * num2 > 0) {
		if (num1 > 0) {
			printf("�ش� ��ǥ�� �� 1��и鿡 ��ġ�ϰ� �ֽ��ϴ�.");
		}
		if (num1 < 0) {
			printf("�ش� ��ǥ�� �� 3��и鿡 ��ġ�ϰ� �ֽ��ϴ�.");
		}
	}

	if (num1 * num2 < 0) {
		if (num1 > 0) {
			printf("�ش� ��ǥ�� �� 4��и鿡 ��ġ�ϰ� �ֽ��ϴ�.");
		}
		if (num1 < 0) {
			printf("�ش� ��ǥ�� �� 2��и鿡 ��ġ�ϰ� �ֽ��ϴ�.");
		}

	}
}