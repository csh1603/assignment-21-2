#include <stdio.h>

int taxi_fare(int range, int fee);

int main(void) {
	int range = 0;
	int fee = 0;
	printf("이동거리 : ");
	scanf_s("%d", &range);

	if (range > 2000) {
		fee = (range - 2000) / 160;
	}

	printf("택시 요금 : %d\n", taxi_fare(range, fee));
}

int taxi_fare(int range, int fee) {
	int x=0;
	x = 2400 + (fee*100);
	return x;
}