#include <stdio.h>
int main2() {
	int arr[3][3];
	int brr[3][3];
	int crr[3][3];
	int a = 1;
	int b = 0;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			arr[i][j] = a++;
			printf(" %2d", arr[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			b += 10;
			brr[i][j] = b;
			printf(" %2d", brr[i][j]);
		}
		printf("\n");
	}

	printf("\n");
	printf("\n");

	for (int i = 0; i < 3; i++) {
		int k = 0;
		for (int l = 0; l < 3; l++) {
			int k = 0;  //300의 초기화가 문제였구만
			for (int j = 0; j < 3; j++) {
				k += (arr[i][j] * brr[j][l]);
				if (j >= 2) {
					crr[i][j] = k;
					printf(" %4d", crr[i][j]);
				}
			}
		}
		printf("\n");
	}

	return 0;
}