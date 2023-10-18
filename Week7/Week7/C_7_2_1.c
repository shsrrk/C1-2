#include <stdio.h>
int main2() {
	int arr[10000];
	int a = 1;
	
	for (int i = 0; i < 10000; i++) {
		arr[i] = a++;
		int a = arr[10000];
		printf(" %d ", arr[i]);

		if (i % 20 == 0) {
			printf("\n");
		}
	}

}