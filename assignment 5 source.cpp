#include <stdio.h>

int taxi_fare(int range, int fee);

int main(void) {
	int range = 0;
	int fee = 0;
	printf("�̵��Ÿ� : ");
	scanf_s("%d", &range);

	if (range > 2000) {
		fee = (range - 2000) / 160;
	}

	printf("�ý� ��� : %d\n", taxi_fare(range, fee));
}

int taxi_fare(int range, int fee) {
	int x=0;
	x = 2400 + (fee*100);
	return x;
}