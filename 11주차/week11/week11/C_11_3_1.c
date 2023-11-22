#include <stdio.h>
int main() {
	int arr[3] = { 1, 2, 3 };
	int brr[3] = { 4, 5, 6 };
	int drr[3] = { 7, 8, 9 };
	int* prr[3] = {arr, brr, drr}; //선언 뿐만 아니라 넣긷 해줘야 함

	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			printf("%2d", prr[i][j]);
		}
		printf("\n");
	}
}