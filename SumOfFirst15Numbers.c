/*Find the sum of first 15 positive even numbers*/
#include<stdio.h>
void main()
{
	int num=2,sum;
	while(num<=31)
	{
		sum=sum+num;
		num=num+2;
	}
	printf("The sum of first 15 positive even numbers is: %d\n",sum);
}
