/*�� �Է¹ް� (���� ���� ����) ȸ�������� Ȯ���ϴ� ���α׷�*/

#include <stdio.h>
#include <math.h>



int main(void)
{
    int n, r = 0, temp, size = 0; 

    printf("���� �ϳ��� �Է��ϼ��� : ");
    scanf("%d", &n);

    // �ڸ����� ���Ѵ�.
    temp = n;
    while (temp > 0) {
        temp = temp / 10;
        size++;
    }

    // ���� ���ڸ� ���Ѵ�.
    temp = n;
    size--;
    while (temp > 0) {
        r += (temp % 10) * pow((double)10., (double)size--);
        temp /= 10;
    }



    // ���� ���ڿ� ���� ���ڰ� ������ �Ӹ�����̴�.
    if (r == n)
        printf("%d�� ȸ�� �����Դϴ�.\n", n);
    else
        printf("%d�� ȸ�� ���ڰ� �ƴմϴ�.\n", n);

    return 0;
}