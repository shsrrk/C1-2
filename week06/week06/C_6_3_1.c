#include <stdio.h>
int main(){
	int arr[5];
	int i;
	for (i = 0; i < 5; i++) {
		arr[i] = i + 10;
	}
	for (i = 0; i < 5; i++) {
		printf("%d", arr[i]);
	}
	return 0;
}