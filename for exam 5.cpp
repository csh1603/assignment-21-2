#include<stdio.h>

void main() {
	int category, month;
	double amount, total;

	printf("������ �Է��Ͻÿ�:(1: ������ 2: ���� 3: �Ϲݿ�) : ");
	scanf("%d", &category);
	printf("����� ���¾��� �Է��Ͻÿ�(kwh): ");
	scanf("%lf", &amount);
	printf("���� �Է��Ͻÿ� : ");
	scanf("%d", &month);

	switch (category) {
	case 1: 
		if (month == 7 || month == 8)
			total = 4090 + (73.0 * amount);
		else if (month > 10 || month < 4)
			total = 4090 + (50.5 * amount);
		else
			total = 4090 + (46.9 * amount);
		break;
	case 2 :
		total = 1070 + (36.4 * amount);
		break;
	case 3 :
		if (month == 7 || month == 8)
			total = 5.320 + (94.2 * amount);
		else if (month > 10 || month < 4)
			total = 5320 + (66.8 * amount);
		else
			total = 5320 + (62.7 * amount);
		break;
	}
	printf("�������� %lf\n", total);
}