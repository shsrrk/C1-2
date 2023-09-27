#include <stdio.h>
int main() {
	int i, j;
	for (i = 1; i <= 5; i++) {
		int p = 1;
		for (j = 1;j<=i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}