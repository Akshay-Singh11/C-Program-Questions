#include<stdio.h>
int main()
{
  	int Number, i,sum=0;
                                                 printf("\n Please Enter  Value  : ");
  	scanf("%d", &Number);
  	printf("\n List of Natural Numbers from 1 to %d are \n", Number);  	
	for(i = 1; i <= Number; i++)
  	{
    	printf(" %d \t", i);
  	}
      printf("Enter upper limit: ");
    scanf("%d", &Number);
   for(i=1; i<=Number; i++)
    {
        sum += i;
    }
  printf("Sum of first %d natural numbers = %d", Number, sum);
  return 0;
}
