#include<stdio.h>
int main()
{
    printf("1. Check Zero \n");
    printf("2. Check Positive \n");
    printf("3. Check Negative \n");

    int choice;
    printf("Enter your choice : ");
    scanf("%d",&choice);

    int num;
    printf("Enter Number : ");
    scanf("%d", &num);
    switch(choice)
    {
        case 1 : 
        {
            if(num == 0)
            {
                printf("It is zero");
            }
            else{
                printf("Number isn't zero");
            }
            break;
        }
        case 2:
        {
            if(num > 0)
            {
                printf("Number is Positive");
            }
            else
            {
                printf("Number not is Positive");
            }
            break;
        }
        case 3:
        {
            if(num < 0)
            {
                printf("Number is Negative");
            }
            else
            {
                printf("Number not is Negative");
            }
            break;
        }

        default :
        {
            printf("Enter a valid choice !");
        }
    }

    return 0;
}
