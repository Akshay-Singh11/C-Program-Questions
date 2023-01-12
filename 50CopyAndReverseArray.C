#include <stdio.h>

// Function to swap two memory contents
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to reverse the arr through ptrs
void reverse(int arr[], int len)
{

    // ptr1 pointing at the beginning of the arr
    int *ptr1 = arr,

        // ptr2 pointing at end of the arr
        *ptr2 = arr + len - 1;
    while (ptr1 < ptr2)
    {
        swap(ptr1, ptr2);
        ptr1++;
        ptr2--;
    }
}

// Function to print the arr
void print(int *arr, int len)
{

    // Length pointing at end of the arr
    int *length = arr + len,

        // pos pointing to the beginning of the arr
        *pos = arr;
    printf("arr = ");
    for (pos = arr; pos < length; pos++)
        printf("%d ", *pos); // cout << *pos << " ";
}
void copy(int arr[], int copyArr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        copyArr[i] = arr[i];
    }
}
// Driver function
int main()
{

    // arr to hold the values
    int size;
    printf("Enter size of array : ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nOriginal : ");
    print(arr, size);

    int copyArr[size];
    copy(arr, copyArr, size);
    printf("\nCopied Array : ");
    print(copyArr, size);

    printf("\nReverse : ");
    reverse(arr, size);
    print(arr, size);
    return 0;
}