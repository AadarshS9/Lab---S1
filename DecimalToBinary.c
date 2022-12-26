/*Convert a decimal number to binary equivalent*/
#include<stdio.h>
void main()
{
	int num,digit,r,binary=0,i=1;
	printf("Enter a decimal number: ");
	scanf("%d",&num);
	digit=num;
	
	while(num>0)
	{
		r=num%2;
		num=num/2;
		binary=binary+r*i;
		i=i*10;
	}
	printf("The binary equivalent of decimal number %d is: %d",digit,binary);
}
