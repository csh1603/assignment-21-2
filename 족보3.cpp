// �������� ���� �� �ڸ� ���� ���� �ݳ��ϴ� ����Լ� �ۼ�

#include<stdio.h>

int a, n = 0;

int getsum(int num);

int main(void) {
	int nu;
	printf("Enter_an_integer : \n");
	scanf("%d", &nu);

	printf("The sum of all digits : %d\n", getsum(nu));
	
	return 0;
}

int getsum(int num) {
	
	a = num % 10;
	num = num / 10;
	n += a;
	if (num > 0) {
		getsum(num);
		return n;
	}
}