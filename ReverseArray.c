/*Read n elements and print it in reverse order*/
#include<stdio.h>
void main()
{
	int n,i;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("\n Enter %d Element: ",i+1);
		scanf("%d",&a[i]);
	}
	
	printf("\nElements in array are: \n");
	
	for(i=n-1;i>=0;i--)
	{
		printf("%d \t",a[i]);
	}
}
