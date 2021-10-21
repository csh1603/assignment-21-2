#include <stdio.h>

struct TIME {
	int seconds;
	int minutes;
	int hours;
};

int main(void) {
	struct TIME t1, t2, diff;

	printf("시작 시간을 시 분 초 단위로 순서대로 입력하세요 : ");
	scanf("%d %d %d", &t1.hours, &t1.minutes, &t1.seconds);
	

	if (t1.seconds > 60 || t1.minutes > 60 || t1.hours > 24 )
		printf("잘못된 입력입니다.\n");
	else {
		printf("종료 시간을 시 분 초 단위로 순서대로 입력하세요 : ");
		scanf("%d %d %d", &t2.hours, &t2.minutes, &t2.seconds);

		if (t2.seconds > 60 || t2.minutes > 60 || t2.hours > 24)
			printf("잘못된 입력입니다.\n");
		else {
			diff.hours = t2.hours - t1.hours;
			diff.minutes = t2.minutes - t1.minutes;
			diff.seconds = t2.seconds - t1.seconds;

			printf("두 시간의 차이는 %d시간 %d분 %d초입니다.", diff.hours, diff.minutes, diff.seconds);
		}
	}
	return 0;
}