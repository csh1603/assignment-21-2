/*사용자가 0을 입력할 때까지 양의 정수를 입력 받되
입력이 끝난면 입력 받은 정수들 중에서 3 혹은 4로 나누어 떨어지는 정수의 개수를 출력하는 프로그램을 작성하시오.*/

#include <stdio.h>

#define MAX 100

int main(void) {
	int arr[MAX],i, j, count =0 ;

	printf("양의 정수를 입력하세요(0을 입력할 때까지 저장됩니다.) : ");
	for (i = 0;;i++) {
		scanf("%d", &arr[i]);
		if (arr[i] == 0)
			break;
	}

	for (j = 0;j <= i-1;j++) {
		if (arr[j] % 3 == 0 || arr[j] % 4 == 0)
			count++;
	}
	printf("입력한 정수 중에서 3이나 4로 나누어지는 수는 총 %d개입니다.\n", count);
}