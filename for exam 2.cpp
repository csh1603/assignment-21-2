#include <stdio.h>

int main(void) {
	float a = 0;

	printf("원의 반지름을 입력해주세요 : ");
	scanf("%f", &a);

	printf("원의 넓이는 %f이고, 원의 둘레는 %f입니다.\n", 3.14 * a * a, 2 * 3.14 * a);
	return 0;
}