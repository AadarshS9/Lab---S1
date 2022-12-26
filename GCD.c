/*Find GCD of three numbers*/
#include<stdio.h>
void main()
{
	int a,b,c,n,i=1;
	printf("Enter the first number: ");
	scanf("%d",&a);
	printf("Enter the second number: ");
	scanf("%d",&b);
	printf("Enter the third number: ");
	scanf("%d",&c);
	
	while(i<=a && i<=b && i<=c)
	{
		if(a%i==0 && b%i==0 && c%i==0)
		{
			n=i;
		}
		i=i+1;
	}
	printf("The greatest common divisor of the given three numbers is: %d\n",n);
}
