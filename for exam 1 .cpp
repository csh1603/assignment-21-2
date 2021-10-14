#include <stdio.h>

int main(void) {
	char s;
	int a, b, i, j;

	printf("문자 1개와 정수 2개를 입력해주세요 : ");
	scanf("%c %d %d", &s, &a, &b);

	for (i = 0;i < a;i++) {
		for (j = 0;j < b;j++)
			printf("%c", s);
		printf("\n");
	}
	return 0;
}