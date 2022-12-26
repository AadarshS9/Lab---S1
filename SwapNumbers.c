/*Write a C program to perform swapping of two numbers using function with Call by Reference*/
#include<stdio.h>
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

void main()
{
	int i,j;
	printf("Kindly enter the first number: ");
	scanf("%d",&i);
	printf("Kindly enter the second number: ");
	scanf("%d",&j);
	printf("Original number one is: %d, Original number two is: %d",i,j);
	swap(&i,&j);
	printf("\nAfter swapping: \nNew number one is: %d, New number two is: %d\n",i,j);
}

