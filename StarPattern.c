/*Print following pattern based on a given level using "*" */
#include<stdio.h>
void main()
{
	int i,count=1,row;
	printf("Enter number of rows: ");
	scanf("%d",&row);
	
	while(count<=row)
	{
		int i=1;
		while(i<=count)
		{
			printf("*");
			i++;
		}
		printf("\n");
		count++;
	}
}
