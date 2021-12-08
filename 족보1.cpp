//실수 값을 입력 받아서 소수 첫째 자리에서 반올림하는 함수 만들기

#include<stdio.h>

int myround(float u);

int main(void) {
	float f;
	printf("실수 하나를 입력하세요 : ");
	scanf("%f", &f);
	printf("입력하신 %f를 소수 첫째 자리에서 반올림하면 %d입니다.\n", f, myround(f));
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