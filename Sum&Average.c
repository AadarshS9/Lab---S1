/*Calculate sum and average of n numbers*/
#include<stdio.h>
void main()
{
	int n,i;
	float average,sum=0;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("\n Enter %d Element: ",i+1);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	
	average=sum/n;
	printf("\n\nSum is: %0.2f\n",sum);
	printf("Average is: %0.2f\n",average);
}
