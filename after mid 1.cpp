#include <stdio.h>

struct TIME {
	int seconds;
	int minutes;
	int hours;
};

int main(void) {
	struct TIME t1, t2, diff;

	printf("���� �ð��� �� �� �� ������ ������� �Է��ϼ��� : ");
	scanf("%d %d %d", &t1.hours, &t1.minutes, &t1.seconds);
	

	if (t1.seconds > 60 || t1.minutes > 60 || t1.hours > 24 )
		printf("�߸��� �Է��Դϴ�.\n");
	else {
		printf("���� �ð��� �� �� �� ������ ������� �Է��ϼ��� : ");
		scanf("%d %d %d", &t2.hours, &t2.minutes, &t2.seconds);

		if (t2.seconds > 60 || t2.minutes > 60 || t2.hours > 24)
			printf("�߸��� �Է��Դϴ�.\n");
		else {
			diff.hours = t2.hours - t1.hours;
			diff.minutes = t2.minutes - t1.minutes;
			diff.seconds = t2.seconds - t1.seconds;

			printf("�� �ð��� ���̴� %d�ð� %d�� %d���Դϴ�.", diff.hours, diff.minutes, diff.seconds);
		}
	}
	return 0;
}