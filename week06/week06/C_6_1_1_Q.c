#include <stdio.h>
int main2() {
	int num, a = 0;

	scanf_s("%d", &num);

	for (int i = 1; i < num+1; i++) {
		if (num % i == 0) {
			printf("%d  ", i);
			a += 1;
		}
		else continue;  //return 0;도 됨
	}

	printf("\n %d 의 약수는 위와 같습니다. 또한 %d의 약수의 갯수는 %d개 입니다.", num, num, a);
}