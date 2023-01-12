#include <stdio.h>
int main()
{
    int rows;
    printf("No. of rows (r) : ");
    scanf("%d", &rows);
    printf("Square Pattern\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            printf("%d ", i + 1);
        }
        printf("\n");
    }
    return 0;
}
