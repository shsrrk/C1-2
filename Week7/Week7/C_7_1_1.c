#include <stdio.h>
int main1() {
	int num;
	int a = 0, b = 0, c = 0;
	printf("���� �Է��ϽÿͿ�");
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++){
		c = a + b;
		b = a;
		a = c;
	}

	printf("�Է��Ͻ� ���� ���� %d �Դϴ�.", a);

}