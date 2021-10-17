#include <stdio.h>

/*1~100 사이의 임의의 정수 값에 대해서 그 정수에 9를 곱한다. 그 결과값의 각 자리 수의 값을 모두 더하면 9가 나온다.
사용자로부터 임의의 정수 값을 입력 받은 다음 입력 받은 값에 9를 곱한 값과 곱해진 값의 각 자리 수를 보여주고, 
이들의 합이 한 자리수가 될때까지 계속 더하면 9가 됨을 각 단계별로 보이는 프로그램*/

int main(void) {

	int a, num, w, x, y, z;

	printf("1~100 사이의 정수를 입력하세요 : ");
	scanf("%d", &a);

	num = a * 9;
	x = num / 100;
	y = num % 100 / 10;
	z = num % 10;

	if (a < 1 || a>100)
		printf("잘못된 입력입니다.\n");
	else {
		printf("입력한 정수 %d에 9를 곱하면 %d입니다.\n", a, num);
		for (x = num / 100, y = num % 100 / 10, z = num % 10, w = num;;) {
			num = x + y + z;
			printf("%d의 각 자리수는 %d, %d, %d이고 이를 모두 더하면 %d입니다.\n", w, x, y, z, num);
			if (num < 10)
				break;
		}
	}
	return 0;

}