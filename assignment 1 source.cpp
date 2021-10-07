#include <stdio.h>

int main(void)
{
	float f = 0;
	printf("kg? : ");
	scanf("%f", &f);

	printf("%f kg is %f lbs.\n", f, f * 2.2);

	return 0;
}