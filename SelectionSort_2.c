/*C program to sort the array in descending order using selection sort*/
#include<stdio.h>

void main()
{
	int i,j,num,maxpos,temp;
	printf("Enter the number of elements in array: ");
	scanf("%d",&num);
	
	int array[num];
	for(i=0;i<num;i++)
	{
		printf("Enter the %d element: ",i+1); 
		scanf("%d",&array[i]);
	}
	
	printf("\nGiven array is as follows: ");
	for(i=0;i<num;i++)
	{
		printf(" %d ",array[i]); 
	}
	
	for(i=0;i<num;i++)
	{
		maxpos=i;
		for(j=i+1;j<num;j++)
		{
			if(array[maxpos]<array[j])
			{
				maxpos=j;
			}
		}
		
		temp=array[i];
		array[i]=array[maxpos];
		array[maxpos]=temp;
			
		
	}
	
	printf("\n\nSorted array in descending order is: ");
	for(i=0;i<num;i++)
	{
		printf(" %d ",array[i]);
	}
}
