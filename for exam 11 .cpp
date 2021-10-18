/*수 입력 받고 그 수를 변으로 하는 역직각이등변 삼각형*/

#include <stdio.h> 

int main(void) {
	int a, i, j;

	printf("수를 입력해주세요 : ");
	scanf("%d", &a);

	for (i = a;i > 0;i--) {
		for (j = a+1;j > i;j--)
			printf("*");
		printf("\n");
	}
}