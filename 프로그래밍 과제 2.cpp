#include <stdio.h>
#define MAX 5

struct ip {
	int a, b, c, d;
	char str[10];
};

int main(void) {
	int ret = 0, count = 0;
	struct ip ip_list[MAX];

	printf("IP�ּҰ� ���� 5���� �Է��ϼ���.\n");

	while (count < MAX) {
		ret = scanf("%d.%d.%d.%d", &ip_list[count].a, &ip_list[count].b, &ip_list[count].c, &ip_list[count].d);
		scanf("%s", ip_list[count].str);
		if (ret < 4) {
			printf("�߸��� �Է��Դϴ�.\n");
			continue;
		}
		count++;
	}
	count = 0;
	printf("��ȭ���ڴ��б��� ���� �ּ�:\n");
	while (count < MAX) {
		if (ip_list[count].a == 203 && ip_list[count].b == 255)
			printf("%s\n", ip_list[count].str);
		count++;
	}
}