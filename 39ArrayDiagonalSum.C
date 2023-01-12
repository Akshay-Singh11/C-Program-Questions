#include <stdio.h>
int main()
{
    int row, col, sum = 0;
    printf("Rows of Array : ");
    scanf("%d", &row);
    printf("Columns of Array : ");
    scanf("%d", &col);

    int A[row][col];
    printf("Enter Array Elements : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                sum += A[i][j];
            }
        }
    }
    printf("Diagonal Sum = %d", sum);
    return 0;
}
