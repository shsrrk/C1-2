#include <stdio.h>
int main() {
	int arr[3] = { 1, 2, 3 };
	int brr[3] = { 4, 5, 6 };
	int drr[3] = { 7, 8, 9 };
	int* prr[3] = {arr, brr, drr}; //���� �Ӹ� �ƴ϶� �ֱ� ����� ��

	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			printf("%2d", prr[i][j]);
		}
		printf("\n");
	}
}