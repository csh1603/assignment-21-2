// 역삼각형 별을 그리는 프로그램 -> 첫 줄에 N개의 *, 둘째줄에 N-1개의 * ...

#include<stdio.h>

int main(void) {
	int num, i, j;

	printf("1~100 사이의 정수를 입력하세요 : ");
	scanf("%d", &num);

	if (num > 0 && num < 101) {
		for (i = num;i >= 0;i--) {
			for (j = num;j >= i;j--)
				printf(" ");
			for (j = 0;j <= i*2 ;j++)
				printf("*");
			printf("\n");
		}
	}
	else
		printf("잘못된 입력입니다.\n");
}