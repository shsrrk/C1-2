#include <stdio.h>
int main1() {
	int a, b, c;

	for (a=1; a <= 5; a++) {
		for(b=1;b <= 5-a;b++){
			printf("");
		}
		for (c = 1; c <= 2*b-1; c++) {
			printf(" #");
		}
		printf("\n");
	}
}