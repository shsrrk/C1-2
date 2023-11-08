#include <stdio.h>
int main3() {
	int arr[5][5];
	int a = 1;

	for (int i = 4; i >= 0; i--) {
		for (int j = 0; j < 5; j++) {
			arr[j][i] = a++;
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf(" %2d", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}