#include <stdio.h>
int main() {
	int num1, num2;
	printf("X 좌표를 입력하시오\n"); 
	scanf_s("%d", &num1);
	printf("Y 좌표를 입력하시오\n");
	scanf_s("%d", &num2);


	if (num1 * num2 > 0) {
		if (num1 > 0) {
			printf("해당 좌표는 제 1사분면에 위치하고 있습니다.");
		}
		if (num1 < 0) {
			printf("해당 좌표는 제 3사분면에 위치하고 있습니다.");
		}
	}

	if (num1 * num2 < 0) {
		if (num1 > 0) {
			printf("해당 좌표는 제 4사분면에 위치하고 있습니다.");
		}
		if (num1 < 0) {
			printf("해당 좌표는 제 2사분면에 위치하고 있습니다.");
		}

	}
}