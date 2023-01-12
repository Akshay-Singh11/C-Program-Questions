#include <stdio.h>
int main()
{
    float eng, phy, chem, math, comp; 
    float total, average, percentage;
    char grade;
    printf("Enter marks of five subjects: \n");
    scanf("%f%f%f%f%f", &eng, &phy, &chem, &math, &comp);
    total = eng + phy + chem + math + comp;
    average = total / 5.0;
    percentage = (total / 500.0) * 100;
    if ( percentage>= 90)
        grade = 'A';
    else if (percentage >= 80 && percentage < 90)
        grade = 'B';
    else if (percentage >= 70 && percentage < 80)
        grade = 'C';
    else if (percentage >= 60 && percentage < 70)
        grade = 'D';
    else
        grade = 'E';
    printf("Total marks = %f\n", total);
    printf("Average marks = %f\n", average);
    printf("Percentage = %f", percentage);
    printf("grade = %c",grade);
    return 0;
}
