#include<stdio.h>
int main( )
{
   int n, i, arr[50], inc=0,  j, count, m;
   printf("enter the number");
   scanf("%d",&n);
   m=n;
  while(m>0)
   {
       i=m%10;
       m=m/10;
       arr[inc]=i;
       inc++;
   } 

   for(i=0; i<=9 ; i++)
     {
         count=0;
         for(j=0; j<inc ; j++)
           {
                if(arr[j] == i)
                    count++;
           }
         printf("frequency of %d is %d",n,count);
     }
return 0;
}
