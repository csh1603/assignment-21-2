//�Ǽ� ���� �Է� �޾Ƽ� �Ҽ� ù° �ڸ����� �ݿø��ϴ� �Լ� �����

#include<stdio.h>

int myround(float u);

int main(void) {
	float f;
	printf("�Ǽ� �ϳ��� �Է��ϼ��� : ");
	scanf("%f", &f);
	printf("�Է��Ͻ� %f�� �Ҽ� ù° �ڸ����� �ݿø��ϸ� %d�Դϴ�.\n", f, myround(f));
	return 0;
}

int myround(float u) {
	int i = (int)u;
	float t = 0;
	
	t = u - i;
	if (t > 0.5)
		return (i + 1);
	else
		return i;
}