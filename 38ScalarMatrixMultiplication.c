#include <stdio.h>
int main()
{
    int row, col, multiplier, sum = 0;
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

    printf("Scalar Multiplier : ");
    scanf("%d", &multiplier);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            A[i][j] = multiplier * A[i][j];
        }
    }
    printf("Updated Array after scalar multiplication : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    return 0;
}
