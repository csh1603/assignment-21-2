//month와 day를 입력받아 1월 1일부터의 총 day수를 출력하는 프로그램

#include <stdio.h>

int main(void) {
	int month, day;
	int total = 0;

	printf("month와 day를 입력해주세요 : ");
	scanf_s("%d %d", &month, &day);

	switch (month) {
	case 1:
		printf("%d월 %d까지 차이는 %d일입니다.\n", month, day, day);
		break;
	case 2:
		total = 31 + day;
		printf("%d월 %d까지 차이는 %d일입니다.\n", month, day, total);
		break;
	case 3:
		total = 31 + 28 + day;
		printf("%d월 %d까지 차이는 %d일입니다.\n", month, day, total);
		break;
	case 4:
		total = 31 + 28 + 31 + day;
		printf("%d월 %d까지 차이는 %d일입니다.\n", month, day, total);
		break;
	case 5:
		total = 31 + 28 + 31 + 30 + day;
		printf("%d월 %d까지 차이는 %d일입니다.\n", month, day, total);
		break;
	case 6:
		total = 31 + 28 + 31 + 30 + 31 + day;
		printf("%d월 %d까지 차이는 %d일입니다.\n", month, day, total);
		break;
	case 7:
		total = 31 + 28 + 31 + 30 + 31 + 30 + day;
		printf("%d월 %d까지 차이는 %d일입니다.\n", month, day, total);
		break;
	case 8:
		total = 31 + 28 + 31 + 30 + 31 + 30 + 31 + day;
		printf("%d월 %d까지 차이는 %d일입니다.\n", month, day, total);
		break;
	case 9:
		total = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + day;
		printf("%d월 %d까지 차이는 %d일입니다.\n", month, day, total);
		break;
	case 10:
		total = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + day;
		printf("%d월 %d까지 차이는 %d일입니다.\n", month, day, total);
		break;
	case 11:
		total = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + day;
		printf("%d월 %d까지 차이는 %d일입니다.\n", month, day, total);
		break;
	case 12:
		total = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + day;
		printf("%d월 %d까지 차이는 %d일입니다.\n", month, day, total);
		break;
	}
	return 0;
}