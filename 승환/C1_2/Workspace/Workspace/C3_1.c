#include <stdio.h>

int main1() {
	double num1, num2;
	int d;
	printf("�Ǽ��� �Է��ϼ���");
	scanf_s("%lf", &num1);

	d = num1;
	num2 = num1 - d;

	printf("�Է��Ͻ� ���� ���� �κ��� %d �̰� �Ǽ��κ��� %.2f �Դϴ�.", d, num2);
}