/*Reverse a given number*/
#include<stdio.h>
void main()
{
	int num,reverse=0,digit;
	printf("Enter a number to reverse: ");
	scanf("%d",&num);
	while(num>0)
	{
		digit=num%10;
		reverse=reverse*10+digit;
		num=num/10;
	}
	printf("Reverse of given number is: %d",reverse);
}
