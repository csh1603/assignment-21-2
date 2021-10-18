/*수 입력받고 (길이 제한 없음) 회문수인지 확인하는 프로그램*/

#include <stdio.h>
#include <math.h>



int main(void)
{
    int n, r = 0, temp, size = 0; 

    printf("숫자 하나를 입력하세요 : ");
    scanf("%d", &n);

    // 자릿수를 구한다.
    temp = n;
    while (temp > 0) {
        temp = temp / 10;
        size++;
    }

    // 역순 숫자를 구한다.
    temp = n;
    size--;
    while (temp > 0) {
        r += (temp % 10) * pow((double)10., (double)size--);
        temp /= 10;
    }



    // 정상 숫자와 역순 숫자가 같으면 팰린드롬이다.
    if (r == n)
        printf("%d는 회문 숫자입니다.\n", n);
    else
        printf("%d는 회문 숫자가 아닙니다.\n", n);

    return 0;
}