#include <stdio.h>
int main2(){
	int s;
	for (int i = 0;; i++){
	printf("������ �Է��ϼ���");
	printf("\n");
	scanf_s("%d", &s);

		if (s == 0) {
			return 0;
		}

		while (s%2 == 1){
			printf("Ȧ����~!");
			printf("\n");
			printf("\n");
			break;
		}

		while (s%2 == 0) {
			printf("¦����~!");
			printf("\n");
			printf("\n");
			break;
		}

	}



	
}