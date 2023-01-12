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
    int flag = 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if ((i == j && A[i][j] == 1))
            {
                flag = 1;
            }
            else if (i != j && A[i][j] == 0)
            {
                flag = 1;
            }
            else
            {
                flag = 0;
                break;
            }
        }
    }
    if (flag == 0)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
    return 0;
}
