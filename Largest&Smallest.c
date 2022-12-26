/*Find largest and smallest number among ten numbers*/
#include<stdio.h>
void main()
{
	int a[10];
	int n,i,largest,smallest;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	
	if(n>10)
	{
		printf("Out of bounds\n");
		
	}
	
	for(i=0;i<n;i++)
	{
		printf("\n Enter %d Element: ",i+1);
		scanf("%d",&a[i]);
	}
	
	largest=smallest=a[0];
	for(i=1;i<n;++i)
	{
		if(a[i]>largest)
		{
			largest=a[i];
		}
		if(a[i]<smallest)
		{
			smallest=a[i];
		}
	}
	printf("\nThe largest element is: %d",largest);
	printf("\nThe smallest element is: %d\n",smallest);
}		
