#include <stdio.h>
#include <string.h>

int i = 0, j = 0;

void find_caps(char* caps, const char* str);

int main(void) {
	char get[20] = "";
	char rec[20] = "";

	printf("문자열을 입력하세요. \n");
	scanf("%s", get);

	find_caps(&rec, &get);

	if (strlen(rec) != 0)
		printf("%s에서 대문자는 %s입니다.\n", get, rec);
	else
		printf("%s에서 대문자는 없습니다.\n", get);
}

void find_caps(char* caps, const char* str) {

	if (i < strlen(str)) {
		if (str[i]>='A' && str[i] <= 'Z') {
			strncpy(&caps[j], &str[i], 1);
			j++;
		}
		i++;
		find_caps(caps, str);
	}
}