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

	printf("���ڿ��� �Է��ϼ��� : ");
	scanf("%s", str);

	reversestr(rev);
	printf("\n");
}