// 한 줄씩 내려갈 때마다 숫자 하나가 *로 바뀌는 프로그램

#include <stdio.h>

int main(void) {
	int num = 7, i, j, a;
	for (i = 1; i <= num;i++) {
		for (j = 1;j <= i;j++)
			printf("*");
		for (j = i+1;j <= num;j++) {
			printf("%d", j);
		}
		printf("\n");
	}
}