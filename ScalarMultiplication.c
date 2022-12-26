/*Implement scalar multiplication using arrays*/
#include<stdio.h>
void main()
{
	int i,j,rows,columns,c[10][10],scalarvalue;
	printf("\nEnter number of rows followed by number of columns: \n");
	scanf("%d %d",&i,&j);
	printf("\nPlease enter the matrix elements from left to right row-wise: \n");
	
	for(rows=0;rows<i;rows++)
	{
		for(columns=0;columns<j;columns++)
		{
			scanf("%d",&c[rows][columns]);
		}
	}
	
	printf("\nPlease enter the scalar multiplication value: ");
	scanf("%d",&scalarvalue);
	
	for(rows=0;rows<i;rows++)
	{
		for(columns=0;columns<j;columns++)
		{
			c[rows][columns]=scalarvalue*c[rows][columns];
		}
	}
	
	printf("\nThe result is: \n");
	for(rows=0;rows<i;rows++)
	{
		for(columns=0;columns<j;columns++)
		{
			printf("%d \t",c[rows][columns]);
		}
		printf("\n");
	}
}
