#include <stdio.h>
float calcArea(float r)
{
    float Area = (22 * r * r) / 7;
    return Area;
}

float calcCircumference(float r)
{
    float Circum = (2 * 22 * r) / 7;
    return Circum;
}

float calcDiameter(float r)
{
    float Dia = 2 * r;
    return Dia;
}
int main()
{
    float r, d, C, Area; /* r = Radius, d = Diameter, C = Circumference */
    printf("Enter Radius of Circle (r) = ");
    scanf("%f", &r);

    printf("\nDiameter = %6.2f", calcDiameter(r));
    printf("\nCircumference = %6.2f", calcCircumference(r));
    printf("\nArea = %6.2f sq.cm", calcArea(r));
    return 0;
}
