#include<stdio.h>
#include<stdlib.h>
int main()
{
	int r=3, c=3;
	
	int **a;
	//Allocate memory to matrix
	a = (int **) malloc(r * sizeof(int *));
	for(int i=0; i<r; i++)
	{
		a[i] = (int *) malloc(c * sizeof(int));
	}
	
	//Read elements into matrix
	printf("Enter 3x3 matrix elements: ");
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	//Print elements in the matrix
	printf("Matrix elements are: \n");
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	//Dellocating memory of matrix
	for(int i=0; i<r; i++)
	{
		free(a[i]);
	}
	free(a);
	return 0;
}
