/*Find the largest and smallest among the list of numbers*/
#include<stdio.h>
void main()
{
	int num,n,i=1,small=65535,large=0;
	printf("Enter the number of elements: ");
	scanf("%d",&num);
	
	while(i<=num)
	{
		printf("Input element: \n");
		scanf("%d",&n);
		
		if(n<=small)
		{
			small=n;
		}
		if(n>=large)
		{
			large=n;
		}
		i++;
	}
	printf("Largest number is: %d\n",large);
	printf("Smallest number is: %d\n",small);
}
