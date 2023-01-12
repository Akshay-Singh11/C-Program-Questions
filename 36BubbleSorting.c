#include <stdio.h>
#define SIZE 50
int main()
{
    int A[SIZE], i, j, temp, n;
    printf("Enter the size of array : \n");
    scanf("%d", &n);
    printf("Enter Array Elements :\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("\n\n");
    printf("Array Elements : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n\n");
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (A[i] > A[j])
            {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
    printf("\n\nArray after sorting : ");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", A[i]);
    }
    printf("2nd Biggest Number = %d", A[n - 2]);
    return 0;
}
