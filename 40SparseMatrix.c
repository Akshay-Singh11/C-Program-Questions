#include <stdio.h>
int main()
{
	int i, j, r, c, count = 0;
	printf("Enter no of rows and columns in matrix \n");
	scanf("%d %d", &r, &c);
	int a[r][c];
	printf("Enter the value of martix ELEMENTS : ");

	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			if (a[i][j] == 0)
			{
				count++;
			}
		}
	}
	
	int size = r * c;
	printf("Rows : %d \n",r);
	printf("Columns : %d \n",c);
	printf("Size : %d \n",size);
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%d   ", a[i][j]);
		}
		printf("\n");
	}

	if (count > (size / 2))
	{
		printf("Sparse matrix.");
	}
	else
	{
		printf("no");
	}
	return 0;
}
