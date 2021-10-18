//입력받은 수를 밑변으로 하는 정삼각형 출력

/*#include <stdio.h>

int main(void) {
	int a, i, j;
	printf("밑변의 길이를 입력하세요 : ");
	scanf("%d", &a);

	for (i = 0;i < a;i++) {
		for (j = a-1;j>i;j--)
			printf(" ");
		for (j = 0;j<2*i+1;j++)
			printf("*");
		printf("\n");
	}
} */

// 위의 문제를 뒤집어서 출력

#include<stdio.h>

int main(void) {
	int a, i, j;

	printf("행의 수를 입력하세요 : ");
	scanf("%d", &a);

	for (i = a;i > 0;i--) {
		for (j = i;j <= a;j++)
			printf(" ");
		for (j = 0;j <= ((i-1)*2);j++)
			printf("*");
		printf("\n");
	}
}