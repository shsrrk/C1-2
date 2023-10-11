#include <stdio.h>
int main3() {
	int num, a = 0;

	scanf_s("%d", &num);

	for (int i = 1; i < num + 1; i++) {
		if (num % i == 0) {
			a += 1;
		}
		  //return 0;µµ µÊ
	}
	if (a == 2) {
		printf("¼Ò¼ö¿©~");
	}
	if (a != 2) {
		printf("¼Ò¼ö°¡ ¾Æ³à~");
	}
}