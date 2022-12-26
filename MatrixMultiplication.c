/*C Program to perform matrix multiplication*/
#include<stdio.h>
void main()
{
	int a,b,c,d,i,j,k;
	printf("Enter First Matrix Row: ");
	scanf("%d",&a);
	printf("Enter First Matrix Column: ");
	scanf("%d",&b);
	printf("Enter Second Matrix Row: ");
	scanf("%d",&c);
	printf("Enter Second Matrix Column: ");
	scanf("%d",&d);
	
	if(b!=c)
	{
		printf("Matrices cannot be multiplied\n");
	}
	else
	{
		int x[a][b],y[c][d],z[a][d];
		
		printf("Please enter first matrix elements: ");
		for(i=0;i<a;i++)
		{
			for(j=0;j<b;j++)
			{
				scanf("\t %d",&x[i][j]);
			}
		}
		printf("Please enter second matrix elements: ");
		for(i=0;i<c;i++)
		{
			for(j=0;j<d;j++)
			{
				scanf("\t %d",&y[i][j]);
			}
		}
		
		printf("\nFirst Matrix elements are: ");
		for(i=0;i<a;i++)
		{
			printf("\n");
			for(j=0;j<b;j++)
			{
				printf("\t %d",x[i][j]);
			}
		}
		
		printf("\nSecond Matrix elements are: ");
		for(i=0;i<c;i++)
		{
			printf("\n");
			for(j=0;j<d;j++)
			{
				printf("\t %d",y[i][j]);
			}
		}
		
		
		for(i=0;i<a;i++)
		{
			printf("\n");
			for(j=0;j<d;j++)
			{
				z[i][j]=0;
				for(k=0;k<b;k++)
				{
					z[i][j]=z[i][j]+(x[i][k]*y[k][j]);
				}
			}
		}
		
		printf("\nMultiplication Matrix is: ");
		for(i=0;i<a;i++)
		{
			printf("\n");
			for(j=0;j<d;j++)
			{
				printf("\t %d",z[i][j]);
			}
			
		}
		printf("\n");
	}
}
		
		
		
		
		
		
		
		
		
		
