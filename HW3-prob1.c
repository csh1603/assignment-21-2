#include <stdio.h>

#define MAX_ROW 10
#define MAX_COL 10

void transpose(int a[][MAX_COL], int at[][MAX_COL], int row, int col);
int issymmetric(int a[][MAX_COL],int row, int col);

int main(void)
{
	int A[MAX_ROW][MAX_COL];

	int row,col;
	int i,j;

	printf("row?\n");
	scanf("%d",&row);

	printf("col?\n");
	scanf("%d",&col);

	for(i = 0 ; i<row ; i++)
	{
		for(j = 0 ; j<col ; j++)
		{
			printf("A[%d][%d]?\n",i,j);
			scanf("%d",&A[i][j]);
		}
	}

	printf("\nA = \n");

	for(i = 0 ; i<row ; i++)
	{
		for(j = 0 ; j<col ; j++)
		{
			printf("%3d",A[i][j]);
		}

		printf("\n");
	}

	if (row==col && issymmetric(A,row,col)) {
		printf("입력된 행렬은 대칭행렬입니다.\n");
	}
	else {
		printf("입력된 행렬은 대칭행렬이 아닙니다.\n");
	}

	return 0;
}

void transpose(int a[][MAX_COL], int at[][MAX_COL], int row, int col)
{
	int i,j;
	for (i=0;i<row;i++) {
		for (j=0;j<col;j++) {
			at[i][j]=a[j][i];
		}
	}
}

int issymmetric(int a[][MAX_COL],int row, int col)
{
	int at[MAX_ROW][MAX_COL];
	int i,j;
	int ret=1;

	transpose(a,at,row,col);

	for(i = 0 ; i<row ; i++)
	{
		for(j = 0 ; j<col ; j++)
		{
			if (a[i][j] != at[i][j])
				ret=0;
		}
	}
	return ret;
}
