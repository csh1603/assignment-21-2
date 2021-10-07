#include <stdio.h>

// 각 자리수의 3,6,9의 개수를 세기 위한 전역변수 선언, 초기화
short count = 0;

// 각 자리수의 3,6,9의 개수를 더해서 '짝!'을 그 숫자만큼 출력하기 위한 함수
short devide(short num) {
	if (num == 3 || num == 6 || num == 9)
		count ++; //3,6,9가 있다면 count 변수에 1씩 더하기
	return count;
}

void main() {
	// 입력받을 정수, 각 자리수를 저장하기 위한 변수, for문을 위해 필요한 변수 선언 및 초기화
	short a = 0, b = 0, i = 0, n = 0, x=0, y=0, z=0, w=0, d=0;
	// 정수 2개를 입력 받기 위해 printf 와 scanf 함수 이용
	printf("두 개의 양의 정수 A, B를 입력하세요 : \n");
	scanf("%hd", &a);
	scanf("%hd", &b);

	/*처음 입력 받은 값이 나중에 입력 받은 값보다 크거나 음수인지 확인*/
	if (a <= b && a >= 0 && b >= 0) {
		/*a부터 b까지 1씩 더해가며 각 자리수를 확인*/
		for (i = a; i <= b; i++) {
			count = 0; // count 변수 초기화
			n = i % 10; // 변수 n에 일의 자리 저장
			x = i / 10000; //변수 x에 만의 자리 저장
			y = i % 10000 / 1000; //변수 y에 천의 자리 저장
			z = i % 1000 / 100; //변수 z에 백의 자리 저장
			w = i % 100 / 10; //변수 w에 십의 자리 저장
			// count 변수에 각 자리수에 3,6,9가 얼마나 있는지 센 후 저장
			devide(x);
			devide(y);
			devide(z);
			devide(w);
			devide(n);

			//각 자리에 3,6,9가 하나도 없으면 해당하는 숫자 출력
			if (count == 0) 
				printf("%d ", i);
				
			else {// 각 자리에 3,6,9에 해당하는 개수만큼 '짝!' 출력
				for (d = 0;d < count;d++)
					printf("짝! ");
			}
		}
		}
	// 위의 해당하는 경우가 아니라면 잘못된 입력임을 알려줌
	else {
		printf("잘못된 입력입니다.\n");
	}
}