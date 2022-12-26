/*Generate Fibonacci Series for a given level*/
#include<stdio.h>
void main()
{
	int n,a=1,b=1,c;
	printf("Enter n: ");
	scanf("%d",&n);
	
	printf("%d\t%d\t",a,b);
	
	while(n>2)
	{
		c=a+b;
		printf("%d\t",c);
		a=b;
		b=c;
		n=n-1;
	}
}
