#include <stdio.h>
int main4() {
	int num, a = 0, b = 0;

	scanf_s("%d", &num);
	for (int i = 1; i <= num; i++) {//�� 1�� �����ϸ� ��
		for (int o = 1; o <= i; o++) {//�� �Ҽ��� �Ҽ� ����
			if (i % o == 0) a += 1;
		}
		if (a == 2) {
			printf("%d ", i);
			b++;
		}
		a = 0;
	}
	printf("\n %d ������ �Ҽ��� ������ %d �� �Դϴ�.", num, b);

}