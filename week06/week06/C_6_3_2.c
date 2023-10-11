#include <stdio.h>
int main() {
	int arr[5];
	int i, sum = 0, avg;

	for (i = 0; i < 5; i++){
		printf("%d번째 정수를 입력하세요: ", i + 1);
		scanf_s("%d", &arr[i]);
		sum += arr[i];
	}

	avg = sum / (sizeof(arr) / sizeof(int)); //sizeof(arr)은 20이다. 또한 sizeof(int)은 4이다. int 로 구성된 방의 갯수가 몇개가 있는지
	printf("총점 : %d, 평균 : %d \n", sum, avg);

	return 0;
}