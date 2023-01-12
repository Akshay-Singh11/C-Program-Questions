#include <stdio.h>
void swapByVal(int, int);
void swapByRef(int *, int *);

int main()
{
    int a = 10;
    int b = 20;

    int c = 70;
    int d = 80;

    printf("Before swapping the values in main a = %d, b = %d\n", a, b); // printing the value of a and b in main
    swapByVal(a, b);
    printf("After swapping values in main a = %d, b = %d\n", a, b); // The value of actual parameters do not change by changing the formal parameters in call by value, a = 10, b = 20

    printf("Before swapping the values in main a = %d, b = %d\n", c, d); // printing the value of a and b in main
    swapByRef(&c, &d);
    printf("After swapping values in main a = %d, b = %d\n", c, d); // The values of actual parameters do change in call by reference, a = 10, b = 20
}

void swapByVal(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("After swapping values in function a = %d, b = %d\n", a, b); // Formal parameters, a = 20, b = 10
}

void swapByRef(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("After swapping values in function a = %d, b = %d\n", *a, *b); // Formal parameters, a = 20, b = 10
}