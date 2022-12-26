/*Write C programs that use both recursive and non-recursive functions to find the factorial of a given integer.*/
#include<stdio.h>

int factr(int n)
{
	if (n==1 || n==0)
		return 1;
	else
		return n*factr(n-1);
}

int factnr(int n)
{
	int s=1,i;
	for(i=1;i<=n;i++)
	{
		s=s*i;
	}
	return s;
}

void main()
{
	int num,x,y;
	printf("Kindly enter a number: ");
	scanf("%d",&num);
	x=factr(num);
	y=factnr(num);
	printf("Solution by recursive method = %d\nSolution by non-recursive method = %d\n",x,y);
}
