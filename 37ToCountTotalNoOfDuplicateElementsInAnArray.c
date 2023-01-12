#include<stdio.h>
#define SIZE 50
 int main()
{
    int A[SIZE],Frequency[SIZE],i,j,n,count;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("\nEnter array elements : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
        Frequency[i] = -1;
    }
    
    for ( i = 0; i < n; i++)
    {
        count = 1;
        for ( j = i+1; j < n; j++)
        {
            if(A[i]==A[j])
            {
                count++;
                Frequency[j] = 0;
            }
        }
        if (Frequency[i] != 0)
        {
            Frequency[i] = count;
        }
        
    }
    for ( i = 0; i < n; i++)
    {
        if (Frequency[i] != 0)
        {
            printf("\nFrequency of %d is = %d",A[i],Frequency[i]);
        }
        
    }
    return 0;
}
