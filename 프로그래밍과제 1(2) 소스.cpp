#include <stdio.h>

// 각 자리수의 3,6,9의 개수를 세기 위한 전역변수 선언, 초기화
short count = 0;

// 각 자리수의 3,6,9의 개수를 더해서 '짝!'을 그 숫자만큼 출력하기 위한 함수
short devide(short num) {
	// 함수의 인자가 3이거나 6이거나 9인지 확인
	if (num == 3 || num == 6 || num == 9)
		count++; //3,6,9가 있다면 count 변수에 1씩 더하기
	return count; //count 값 반환
}

void main() {
	// 입력받을 정수, 각 자리수를 저장하기 위한 변수, for문을 위해 필요한 변수 선언 및 초기화
	short a = 0, b = 0, i = 0, n = 0, d = 0;
	// 각 자리수를 저장하기 위한 배열 선언 및 초기화
	short arr[5] = { 0 };
	// 정수 2개를 입력 받기 위해 printf 와 scanf 함수 이용
	printf("두 개의 양의 정수 A, B를 입력하세요 : \n");
	scanf("%hd", &a);
	scanf("%hd", &b);

	/*처음 입력 받은 값이 나중에 입력 받은 값보다 크거나 음수인지 확인*/
	if (a <= b && a >= 0 && b >= 0) {
		/*a부터 b까지 1씩 더해가며 각 자리수를 확인*/
		for (i = a; i <= b; i++) {
			count = 0; // count 변수 초기화
			arr[4] = i % 10; // 배열 4번째 자리에 일의 자리 저장
			arr[0]= i / 10000; //배열 0번째 자리에 만의 자리 저장
			arr[1] = i % 10000 / 1000; //배열 1번째 자리에 천의 자리 저장
			arr[2] = i % 1000 / 100; //배열 2번째 자리에 백의 자리 저장
			arr[3] = i % 100 / 10; //배열 3번째 자리에 십의 자리 저장
			// count 변수에 각 자리수에 3,6,9가 얼마나 있는지 센 후 저장
			for (n = 0; n<=4;n++)
				devide(arr[n]);

			//각 자리에 3,6,9가 하나도 없으면 해당하는 숫자 출력
			if (count == 0)
				printf("%d ", i);

			else {// 각 자리에 3,6,9에 해당하는 개수만큼 '짝!' 출력
				for (d = 0;d < count;d++)
					printf("짝! ");
			}
		}
	}
	// 위의 해당하는 경우가 아니라면(a가 b보다 크거나, 각 수중 하나라도 음수일 때) 잘못된 입력임을 알려줌
	else {
		printf("잘못된 입력입니다.\n");
	}
}