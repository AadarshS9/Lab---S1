/*Print Fibonacci Pattern
1
* 1
* * 2
* * * 3
*/
#include<stdio.h>
void main()
{
	int n,i=1,j,a=0,b=1,c;
	printf("Enter the number of rows: ");
	scanf("%d",&n);
	printf("%d\n",b);
	while(i<n)
	{
		j=1;
		while(j<=i)
		{
			printf("*");
			j=j+1;
		}
		c=a+b;
		printf("%d\n",c);
		a=b;
		b=c;
		i=i+1;
	}
}
