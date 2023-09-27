#include <stdio.h>
int main5(){
	int x, y, i;
	int res = 1;
	scanf_s("%d %d", &x, &y);
	for (i=1;i<=y;i++) {
		res *= x;
	}
	printf("%d", res);
	return 0;
}