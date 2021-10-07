#include <stdio.h>

int main(void)
{
	int z=0;

	printf("1~100사이의 정수 하나를 입력하세요: ");
	scanf("%d", &z);

	printf("정수 %d에 9를 곱하면 %d가 나옵니다.\n", z, 9*z);

	int x = 0, y = 0, w = 0;
	w = 9 * z;
	x = w / 100;
	y = w / 10 - (w / 100) * 10;

	printf("이때 %d의 각 자리 수 %d,%d,%d를 한 자리 수가 될 때까지 계속 더하면 9가 나옵니다.\n", w, x, y, w%10);
}