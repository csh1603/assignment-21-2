#include <stdio.h>
#include <string.h>

int main(void) {

	char v[30];
	char n[30];
	printf("동사를 입력하세요 : ");
	scanf("%s", v);

	printf("명사를 입력하세요 : ");
	scanf("%s", n);

	printf("I like %sing %ss.\n", v, n);
}
