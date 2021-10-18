/*수 입력받고 그 수를 이용한 직각이등변삼각형 출력*/

#include <stdio.h>

int main(void) {
	int a, i, j;
	printf("변의 길이를 입력하세요 : ");
	scanf("%d", &a);

	for (i = 0;i <a;i++) {
		for (j = 0;j <= i;j++)
			printf("*");
		printf("\n");
	}
}