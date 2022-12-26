/*Check whether a given number is perfect or not,for example 6=+1+2+3*/
#include<stdio.h>
void main()
{
	int num,n,sum=0;
	printf("Enter a number: ");
	scanf("%d",&num);
	n=num-1;
	while(n>0)
	{
		if(num%n==0)
		{
			sum=sum+n;
		}
		n=n-1;
	}
	if(num==sum)
	{
		printf("%d is a perfect number",num);
	}
	else
		printf("%d is not a perfect number",num);
}


/*Another method is as follows:
{
	int num,i=1,sum=0;
	printf("Enter a number: ");
	scanf("%d",&num);
	while(i<num)
	{
		if(num%i==0)
		{
			sum=sum+i;
		}
		i=i+1;
	}
	if(num==sum)
	{
		printf("%d is a perfect number",num);
	}
	else
		printf("%d is not a perfect number",num);
}
*/
