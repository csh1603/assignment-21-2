#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX 80

char *Small(const char *str);

int main(void)
{
	char input[80];
	char *spt;

	printf("문자열을 입력하세요:\n");
	scanf("%s", input);

	spt=Small(input);
	if (spt == NULL) {
		return -1;
	}	
	printf("입력된 문자열을 모두 소문자로 바꾼 문자열:\n");
	printf("%s\n", spt);

	free(spt);
	return 0;
}

char *Small(const char *str)
{
	int i;
	char *pt;
	pt=(char *)malloc((strlen(str) + 1)* sizeof(char));
	if (pt==NULL) {
		printf("메모리 할당에 실패하였습니다.\n");
		return NULL;
	}
	for (i=0;i<strlen(str);i++)
		pt[i]=tolower(str[i]);
	pt[i]='\0';
	return pt;
}