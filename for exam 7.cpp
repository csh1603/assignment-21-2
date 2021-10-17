/*세자리의 양의 정수를 입력 받아서 입력 받은 정수에 십과 일의 자리수를 추가하여 회문수를 만들어 출력하는 프로그램*/

#include <stdio.h>

int main(void) {
	int num, a, b, c, d;

	printf("3자리 정수를 입력하세요 : ");
	scanf("%d", &num);

	a = num / 100;
	b = num % 100 / 10;
	c = a;
	d = b*10;
	
	printf("입력한 정수 %d를 회문수로 만들면 %d입니다.\n", num, (num * 100) + c + d);
}