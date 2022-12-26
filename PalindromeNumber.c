/*Check whether a given 5 digit number is palindrome or not*/
#include<stdio.h>
void main()
{
	int num,remainder,sum=0,temp;
	printf("Enter a five digit number: \n");
	scanf("%d",&num);
	temp=num;
	
	while(num>0)
	{
		remainder=num%10;
		sum=(sum*10)+remainder;
		num=num/10;
	}
	if(temp==sum)
	{
		printf("The given number %d is Palindrome",temp);
	}
	else
	{
		printf("The given number %d is not Palindrome",temp);
	}
}
