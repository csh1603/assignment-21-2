//������ ũ�� n�� �־����� ���� ����� ����ϴ� ���α׷�

#include <stdio.h>

int main(void) {
	int N = 0;

	printf("1~10 �� N ���� �Է��ϼ��� : ");
	scanf_s("%d", &N);

	for (int i = 1;i <= N - 1;i++) {
		for (int j = 1;j <= i;j++)
			printf("%d", j);
		for (int j = 1;j <= (N - 1) * 2 - (i * 2 - 1);j++)
			printf(" ");
		for (int j = i;j >= 1;j--)
			printf("%d", j);
		printf("\n");
	}

	for (int i = 1;i <= N;i++)
		printf("%d", i%10);
	for (int i = N - 1;i >= 1;i--)
		printf("%d", i);
	printf("\n");

	for (int i = N - 1;i >= 1;i--) {
		for (int j = 1;j <= i;j++)
			printf("%d", j);
		for (int j = 1;j <= (N - 1) * 2 - (i * 2 - 1);j++)
			printf(" ");
		for (int j = i;j >= 1;j--)
			printf("%d", j);
		printf("\n");
	}
	return 0;
}