/*Search the position of a particular digit in a given number*/
#include<stdio.h>
void main()
{
	int n,d,number,r,i,found=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("Enter a digit to find position: ");
	scanf("%d",&d);
	
	while(d<0||d>9)
	{
		printf("Wrong Entry\n");
		printf("Enter a digit to find position: ");
		scanf("%d",&d);
	}
	
	number=n;
	i=1;
	while(number)
	{
		r=number%10;
		if(r==d)
		{
			found=1;
			printf("Digit %d found at position: %d\n",d,i);
		}
		i++;
		number=number/10;
	}
	if(!found)
	{
	printf("Digit %d is not present\n",d);
	}
}
