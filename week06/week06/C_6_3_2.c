#include <stdio.h>
int main() {
	int arr[5];
	int i, sum = 0, avg;

	for (i = 0; i < 5; i++){
		printf("%d��° ������ �Է��ϼ���: ", i + 1);
		scanf_s("%d", &arr[i]);
		sum += arr[i];
	}

	avg = sum / (sizeof(arr) / sizeof(int)); //sizeof(arr)�� 20�̴�. ���� sizeof(int)�� 4�̴�. int �� ������ ���� ������ ��� �ִ���
	printf("���� : %d, ��� : %d \n", sum, avg);

	return 0;
}