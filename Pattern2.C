#include <stdio.h>
int main()
{
    int rows;
    printf("No. of rows (r) : ");
    scanf("%d", &rows);
    printf("Right Triangle Star Pattern\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}