#include <stdio.h>

void intdivision(int x, int y, int* z, int* w);

int main (void) {
	int quot, rem;
	int u = 0, v = 0;
	printf("두 개의 정수를 입력하세요 : ");
	scanf("%d %d", &u, &v);
	
	if (v == 0) {
		printf("0으로 나눌 수 없습니다.\n");
	}

	else {
		intdivision(u, v, &quot, &rem);
		printf("%d를 %d로 나누면 몫은 %d이고 나머지는 %d입니다.\n", u, v, quot, rem);
	}
	return 0;
}

void intdivision(int x, int y, int* z, int* w) {
	*z = x / y;
	*w = x % y;
}