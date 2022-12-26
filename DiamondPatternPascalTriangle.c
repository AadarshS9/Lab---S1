/*Diamond Pattern of Pascal's Triangle*/
#include<stdio.h>
void main()
{
	int n,i=0,j=1,s=0,coef=1,a,b;
	printf("Enter number of rows: ");
	scanf("%d",&n);
	a=(n+1)/2;
	b=n-a;
	while(i<a)
	{
		s=a-i;
		while(s>0)
		{
			printf(" ");
			s=s-1;
		}
		j=0;
		while(j<=i)
		{
			if(j==0||j==i)
			{
				coef=1;
			}
			else
			{
				coef=coef*(i-j+1)/j;
			}
			printf("%d ",coef);
			j=j+1;
		}
		printf("\n");
		i=i+1;
	}
	
	i=i-2;
	while(i>=0)
	{
		s=b-i+1;
		while(s>0)
		{
			printf(" ");
			s=s-1;
		}
		j=0;
		while(j<=i)
		{
			if(j==0||j==i)
			{
				coef=1;
			}
			else
			{
				coef=coef*(i-j+1)/j;
			}
			printf("%d ",coef);
			j=j+1;
		}
		printf("\n");
		i=i-1;
	}
}
		
			
