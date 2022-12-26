/*Check whether a given 3 digit number is an Armstrong Number or not*/
#include<stdio.h>
void main()
{
	int num,remainder,sum=0,temp;
	printf("Enter a number: ");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		remainder=num%10;
		sum=sum+(remainder*remainder*remainder);
		num=num/10;
	}
	if(temp==sum)
	{
		printf("%d is an Armstrong Number",temp);
	}
	else
		printf("%d is not an Armstrong Number",temp);
}
