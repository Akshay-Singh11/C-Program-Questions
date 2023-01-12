#include <stdio.h>
#include <iomanip>
const int size = 50;
int main()
{
    int len;
    printf("Enter length of array : ");
    scanf("%d", &len);
    int arr[len];
    printf("\nEnter Array Elements : ");
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < len; i++)
    {
        printf("%d  ", arr[i]);
    }
    int pos, element;

    printf("\nEnter position where you want to insert element : ");
    scanf("%d", &pos);

    if (pos > len + 1)
    {
        printf("\nInvalid Position!!");
        exit(0);
    }
    else
    {
        printf("\nEnter element : ");
        scanf("%d", &element);
        int curPos = len;
        while (curPos >= pos)
        {
            arr[curPos] = arr[curPos - 1];
            curPos--;
        }
        arr[pos - 1] = element;
        len = len + 1;
    }
    printf("\nArray after insertion : ");
    for (int i = 0; i < len; i++)
    {
        printf("%d  ", arr[i]);
    }
    return 0;
}
