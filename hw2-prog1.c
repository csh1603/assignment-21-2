#include <stdio.h>

#define MAX 20
struct ipaddr {
    int a;
    int b;
    int c;
    int d;
    char name[MAX];
};

int main(void) {
    int i,ret;
    struct ipaddr iplist[5];
    printf("IP주소값 별명 5쌍을 입력하세요.\n");
    for (i=0;i<5;) {
        ret=scanf("%d.%d.%d.%d",&iplist[i].a,&iplist[i].b,&iplist[i].c,&iplist[i].d);
        scanf("%s",iplist[i].name);
        if (ret!=4) {
            printf("잘못된 입력입니다.\n");
            continue;
        }
        
        i++;
    }
    printf("이화여자대학교에 속한 주소:\n");
    for (i=0;i<5;i++) {
        if (iplist[i].a==203 && iplist[i].b==255) {
            printf("%s\n",iplist[i].name);
        }
    }
    
    printf("Hello, world!");
    return 0;
}
  