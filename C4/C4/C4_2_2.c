#include <stdio.h>
int main4() {
	int num;
	int sum = 0;
	for (num = 1; num <= 1000; num++) {
			if (num % 3 == 0) {
				sum += num;
			}
		}
	printf("%d", sum);
}