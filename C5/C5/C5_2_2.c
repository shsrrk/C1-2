#include <stdio.h>
int main3() {
	int s;
	do {
		printf("������ �Է��ϼ���");
		printf("\n");
		scanf_s("%d", &s);
			if (s%2 == 0) {
				printf("¦����~!");
				printf("\n");
			}
			if (s%2 == 1) {
				printf("Ȧ����~!");
				printf("\n");
			}

	} while (s != 0);
	return 0;



}