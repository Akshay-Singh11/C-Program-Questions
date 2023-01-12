#include <stdio.h>
int main()
{
    int size;
    printf("Enter size of array : ");
    scanf("%d", &size);
    int arr[size];

    printf("Enter Array Elements : \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nOriginal Array Elements : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }

    int copyArr[size];
    for (int i = 0; i < size; i++)
    {
        copyArr[i] = arr[i];
    }
    printf("\nCopy Array : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", copyArr[i]);
    }
    return 0;
}