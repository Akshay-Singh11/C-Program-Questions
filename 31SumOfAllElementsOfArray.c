#include<stdio.h>
#define SIZE 50
 int main()
{
    int A[SIZE],i,n,sum=0;
    printf("Enter the size of Array : ");
    scanf("%d",&n);
    printf("Enter Array Elements : \n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&A[i]);
    }

    for ( i = 0; i < n; i++)
    {
        sum += A[i];
    }
    printf("Sum of all Elements of Array = %d \n",sum);
    return 0;
}


