// 문자열 뒤집는 프로그램

#include <stdio.h>
#include <string.h>

char str[100];

void reversestr(char* orig) {
	int a;
	int b = strlen(str) - 1 ;
	for (a = b; a > -1; a--) {
		printf("%c", str[a]);
	}
	orig[b] = '\0';
}

int main(void) {
	char* rev = &str[0];

	printf("문자열을 입력하세요 : ");
	scanf("%s", str);

	reversestr(rev);
	printf("\n");
}
