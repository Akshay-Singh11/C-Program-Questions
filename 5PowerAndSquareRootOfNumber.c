#include <stdio.h>
#include <math.h>
int main(){
    double num, root;
    printf("Enter any number to find square root: ");
    scanf("%lf", &num);
    root = sqrt(num);
    printf("Square root of %.2lf = %lf", num, root);
    float base, exp, result;
    printf("\nEnter a base number: ");
    scanf("%f", &base);
    printf("Enter an exponent: ");
    scanf("%f", &exp);
    result = pow(base, exp);
    printf("result = %.2f",result);    
    return 0;
}
