#include <stdio.h>
int main4() {
	int num, a = 0, b = 0;

	scanf_s("%d", &num);
	for (int i = 1; i <= num; i++) {//수 1씩 증가하며 비교
		for (int o = 1; o <= i; o++) {//비교 소수의 소수 여부
			if (i % o == 0) a += 1;
		}
		if (a == 2) {
			printf("%d ", i);
			b++;
		}
		a = 0;
	}
	printf("\n %d 까지의 소수의 갯수는 %d 개 입니다.", num, b);

}