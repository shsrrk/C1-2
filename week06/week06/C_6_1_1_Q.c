#include <stdio.h>
int main2() {
	int num, a = 0;

	scanf_s("%d", &num);

	for (int i = 1; i < num+1; i++) {
		if (num % i == 0) {
			printf("%d  ", i);
			a += 1;
		}
		else continue;  //return 0;�� ��
	}

	printf("\n %d �� ����� ���� �����ϴ�. ���� %d�� ����� ������ %d�� �Դϴ�.", num, num, a);
}