#include <stdio.h>
int main()
{
    int len1, len2;
    printf("Size of array 1 (l1) : ");
    scanf("%d", &len1);
    printf("Size of array 2 (l2) : ");
    scanf("%d", &len2);

    int sLen = (len1 > len2) ? (len2) : (len1);
    int a1[len1];
    int a2[len2];
    int result[len1 + len2];
    printf("Enter Array1 Elements : \n");
    for (int i = 0; i < len1; i++)
    {
        scanf("%d", &a1[i]);
    }
    printf("Enter Array2 Elements : \n");
    for (int i = 0; i < len2; i++)
    {
        scanf("%d", &a2[i]);
    }

    int i = 0, j = 0, k = 0;

    while (i < len1 && j < len2)
    {
        if (a1[i] < a2[j])
            result[k++] = a1[i++];
        else
            result[k++] = a2[j++];
    }

    while (i < len1)
        result[k++] = a1[i++];

    while (j < len2)
        result[k++] = a2[j++];

    printf("\nMerged Sorted Array : ");
    for (int i = 0; i < len1 + len2; i++)
    {
        printf("%d  ", result[i]);
    }
    return 0;
}