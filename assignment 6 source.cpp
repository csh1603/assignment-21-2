//2진수로 바꾸는 프로그램

#include <stdio.h>

int main(void) {

	int rem[10] = { 0,0,0,0,0,0,0,0,0,0 };
	int s = 0, x = 0;

	printf("1~100 사이의 정수를 입력하세요 : ");
	scanf_s("%d", &x);
	while (1) {
		rem[s] = x % 2;
		s++;
		x = x / 2;
		if (x == 0)
			break;
	}
	int a = 9;

	for (a = 9;a >= 0;a--)
		printf("%d", rem[a]);
	printf("\n");
}
