/*C program to sort the array in ascending order using bubble sort*/
#include<stdio.h>

void main()
{
	int i,j,num,temp;
	printf("Enter the number of elements in array:");
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
		for(j=0;j<(num-i-1);j++)
		{
			if(array[j]>array[j+1])
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
	
	printf("\n\nSorted array in ascending order is: ");
	for(i=0;i<num;i++)
	{
		printf(" %d ",array[i]);
	}
}
