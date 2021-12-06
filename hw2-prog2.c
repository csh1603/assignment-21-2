#include <stdio.h>
#include <string.h>

#define MAX 100
void find_caps(char *caps, const char *str);

int main(void)
{
    char str[MAX];
    char caps[MAX]="";
    
    printf("문자열을 입력하세요.\n");
    gets(str);
    find_caps(caps,str);
    if (!strlen(caps)) {
        printf("%s에서 대문자는 없습니다.\n",str);
    }
    else {
        printf("%s에서 대문자는 %s입니다.\n",str,caps);
    }
    return 0;
}

void find_caps(char *caps, const char *str) {
    if (!strlen(str))
        return;
    if (isupper(str[0]))
        sprintf(caps,"%s%c",caps,str[0]);
    find_caps(caps,str+1);
}