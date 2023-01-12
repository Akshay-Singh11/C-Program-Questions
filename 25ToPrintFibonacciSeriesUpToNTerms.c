#include<stdio.h>
int main()
{
    int a = 0, b = 1;
    int c;
    int n;
    printf("How many terms you want to print ?\n");
    scanf("%d",&n);

    if(n == 1)
    {
        printf("%d", a);
    }
    else if(n == 2)
    {
        printf("%d\n", a);
        printf("%d", b);
    }
    else if(n > 2)
    {
        printf("%d\n", a);
        printf("%d\n", b);
        while((n - 2) > 0)
        {
            c = a + b;
            printf("%d\n",c);
            a = b;
            b = c;
            n--;
        }
    }
    return 0;
}
