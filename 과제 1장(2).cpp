//네 자리 정수를 입력 받아 이 수의 각 자릿수의 합을 출력

#include <stdio.h>

int main(void) {
	int num, total;

	printf("네 자리 정수를 입력하세요 : ");
	scanf("%d", &num);

	total = num / 1000;
	num = num % 1000;
	total = total + num / 100;
	num = num % 100;
	total = total + num / 10;
	num = num % 10;
	total = total + num;

	printf("각 자리수의 합은 %d입니다.\n", total);
}