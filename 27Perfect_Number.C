#include <stdio.h>
int main()
{
    int n, rem, sum = 0, i;
    printf("Enter a number\n");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        rem = n % i;
        if (rem == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == n)
        printf("%d is a Perfect Number\n",n);
    else
        printf("%d is not a Perfect Number\n",n);
    printf("Perfect numbers in the given range are : ");
    for(int x = 2; x <= n; x++)
    {
        sum = 0;
        for(int j = 1; j < x; j++)
        {
            rem = x % j;
            if(rem == 0) {
                sum += j;
            }
        }
        if(x == sum) {
            printf("%d \n",x);
        }
    }
    return 0;
}
