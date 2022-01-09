//괴상한 .. 모양 만들기

#include <stdio.h>

int main(void) {
	for (int i = 1; i < 7;i ++) {
		for (int j = 13-2*i;j > 0;j--) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 1;i < 6;i++) {
		for (int j = 1;j <= 1 + 2 * i;j++) {
			printf("*");
		}
		printf("\n");
	}
}