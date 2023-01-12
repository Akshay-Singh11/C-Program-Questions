#include<stdio.h>
int main()
{
    int base, power, result = 1;
    printf("Enter Base Value (b) : ");
    scanf("%d", &base);
    printf("Enter power value (p) : ");
    scanf("%d", &power);

    for(int i = 0; i < power; i++)
        result *= base;

    printf("Answer = %d",result);
}
