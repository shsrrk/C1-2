#include <stdio.h>
int main6() {
	int i, j;
	for (i = 1; i <= 9; i++) {
		for (j = 2; j <= 9; j++) {
			int p = 0;
			p = i * j;
			printf("%2d * %2d = %2d", j, i, p);
		}
		printf("\n");
	}
	return 0;
}