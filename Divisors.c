/*Program to find divisors of a number*/
#include<stdio.h>
void main()
{
	int num,i=1;
	printf("Enter a number: ");
	scanf("%d",&num);
	
	while(i<=num)
	{
		if(num%i==0)
		{
			printf("%d\t",i);
		}
		i++;
	}
}

