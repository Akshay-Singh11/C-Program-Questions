#include <stdio.h>
int main()
{
    int rows;
    printf("No. of rows (r) : ");
    scanf("%d", &rows);
    printf("Hollow Mirrored Right Triangle Star Pattern\n");
    int space = rows;
    for (int i = 0; i < rows; i++)
    {
        for (int k = 0; k < space; k++)
        {
            printf("  ");
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            printf("* ");
        }
        printf("\n");
        space--;
    }
    return 0;
}