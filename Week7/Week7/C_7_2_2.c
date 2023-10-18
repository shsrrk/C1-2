#include <stdio.h>
int main() {
	int arr[5][5];
	int i, j, num = 1;
	int a = 1;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			arr[i][j] = num++;
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}
}
