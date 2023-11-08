#include <stdio.h>
int main1() {
	int arr[5][5];
	int a = 1;

	for (int i = 1; i <= 5; i++){
		for (int j = 1; j <= 5; j++){
			arr[i][j] = a++;
			printf(" %2d", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}