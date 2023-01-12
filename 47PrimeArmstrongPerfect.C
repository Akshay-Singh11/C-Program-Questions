#include <stdio.h>
#include <math.h>
void checkPrime(int n)
{
    int flag = 0;

    if (n < 2)
    {
        printf("\n%d is not a prime no.", n);
    }
    else if (n == 2)
    {
        printf("%d is a prime no. ", n);
    }
    else
    {
        if (n % 2 == 0)
        {
            printf("%d is not a prime no.", n);
        }
        else
        {
            for (int i = 3; i < n / 2; i += 2)
            {
                if (n % i == 0)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
                printf("%d is a prime no. ", n);
            else
                printf("%d is not a prime no.", n);
        }
    }
}

void checkArmstrong(int n)
{
    int n1, n2, rem, num = 0, length = 0;

    n1 = n;
    n2 = n;

    while (n2 > 0)
    {
        n2 = n2 / 10;
        length++;
    }

    while (n1 != 0)
    {
        rem = n1 % 10;
        num = num + pow(rem, length);
        n1 = n1 / 10;
    }

    if (num == n)
    {
        printf("\n%d is Armstrong Number.", n);
    }
    else
    {
        printf("\n%d is not a Armstrong Number.", n);
    }
}
void checkPerfect(int n)
{
    int x, i = 1, rem, sum = 0;
    x = n;
    while (i < n)
    {
        rem = x % i;
        if (rem == 0)
        {
            sum += i;
        }
        i++;
    }
    if (sum == n)
    {
        printf("\n%d is a perfect number.\n", n);
    }
    else
    {
        printf("\n%d isn't a perfect number.\n", n);
    }
}

int main()
{
    int num;
    printf("Enter number (num) : ");
    scanf("%d", &num);

    checkPrime(num);
    checkArmstrong(num);
    checkPerfect(num);

    return 0;
}