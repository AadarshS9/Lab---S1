/*Print Pascal's Triangle*/
#include<stdio.h>
void main()
{
	int n,coef=1,i=0,j=0,s=0;
	printf("Enter the number of rows: ");
	scanf("%d",&n);
	while(i<n)
	{
		s=1;
		while(s<n-i)
		{
			printf(" ");
			s++;
		}
		j=0;
		while(j<=i)
		{
			if(j==0||i==0)
			{
				coef=1;
			}
			else
				coef=coef*(i-j+1)/j;
				printf("%d ",coef);
				j++;
		}
		printf("\n");
		i++;
	}
}		
	
