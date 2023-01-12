#include <stdio.h>
int main()
{
	int n, r, sum = 0, temp;
	printf("enter the number = ");
	scanf("%d", &n);
	int copy = n;
	temp = n;
	while (n > 0)
	{
		r = n % 10;
		sum = sum + (r * r * r);
		n = n / 10;
	}
	if (temp == sum)
		printf("%d is an armstrong number\n", temp);
	else
		printf("%d is not armstrong number\n\n", temp);
	printf("Armstrong numbers in given range are: ");
	for (int i = 1; i <= copy; i++)
	{
		int temp1 = i;
		sum = 0;
		while (temp1 != 0)
		{
			r = temp1 % 10;
			sum = sum + (r * r * r);
			temp1 = temp1 / 10;
		}
		if (sum == i)
			printf("%d \n", i);
	}
	printf("\n");
	return 0;
}
