/*Write a C program to perform vector addition (addition of two integer arrays) using function with Call by Reference.*/
#include<stdio.h>

void vect(int *x,int *y,int *z,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		*(z+i)=*(x+i)+*(y+i);
	}
}

void main()
{
	int n,i;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int a[n],b[n],c[n];
	printf("Enter elements of First Vector: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter elements of Second Vector: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	vect(a,b,c,n);
	
	printf("Addition Vector is: \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",c[i]);
	}
	printf("\n");
}
