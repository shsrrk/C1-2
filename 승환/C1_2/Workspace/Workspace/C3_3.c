#include <stdio.h>
int main(){
	int num1, num2, num3;
	int max;

	printf("���� �ٸ� �� ������ �Է��ϼ���.");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	max = num1 > num2 ? num1 : num2;
	max = max > num3 ? max : num3;
	printf("���� ū ���� %d �ӵ�", max);
	return 0;
}