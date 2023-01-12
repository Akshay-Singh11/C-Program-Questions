#include<stdio.h>
#define SIZE 50
 int main()
{
    int A[SIZE],i,n,x,a=0;
    printf("Enter the size of Array : ");
    scanf("%d",&n);
    printf("Enter Array Elements :\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&A[i]);
    }
    for ( i = 0; i < n; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n Enter the number to search in Array : ");
    scanf("%d",&x);
    for ( i = 0; i < n; i++)
    {
        if (x==A[i])
        {
            printf("\nElement(%d) found at position %d",x,i+1);
            a=1;
            break;
        }
    }
    if(a==0)
    {
        printf("\nElement Not Found!!");
    }
    return 0;
}
