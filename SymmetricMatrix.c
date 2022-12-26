/*C Program to find whether given matrix is symmetric or not*/
#include<stdio.h>
void main()
{
	int i,j,rows,columns,check=1;
	printf("Enter number of rows of matrix: ");
	scanf("%d",&i);
	printf("Enter number of columns of matrix: ");
	scanf("%d",&j);
	
	int a[i][j],b[i][j];
	printf("Please enter matrix elements: ");
	for(rows=0;rows<i;rows++)
	{
		for(columns=0;columns<j;columns++)
		{
			scanf("%d",&a[rows][columns]);
		}
	}
	
	for(rows=0;rows<i;rows++)
	{
		for(columns=0;columns<j;columns++)
		{
			b[columns][rows]=a[rows][columns];
		}
	}
	
	for(rows=0;rows<i;rows++)
	{
		for(columns=0;columns<j;columns++)
		{
			if(a[rows][columns]!=b[rows][columns])
			{
				check++;
				break;
			}
		}
	}
	
	printf("\nGiven matrix is: \n");
	for(rows=0;rows<i;rows++)
	{
		for(columns=0;columns<j;columns++)
		{
			printf("%d\t",a[rows][columns]);
		}
		printf("\n");
	}
	
	printf("\nTranspose matrix is: \n");
	for(rows=0;rows<i;rows++)
	{
		for(columns=0;columns<j;columns++)
		{
			printf("%d\t",b[rows][columns]);
		}
		printf("\n");
	}
	
	if(check==1)
	{
		printf("\nGiven matrix is symmetric\n");
	}
	else
	{
		printf("\nGiven matrix is not symmetric\n");
	}
}
	
