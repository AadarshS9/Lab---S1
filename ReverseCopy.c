/*Copy the elements in one array to another array in reverse order*/
#include<stdio.h>
void main()
{
	int n,i,j;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	int a[n],b[n];
	
	for(i=0;i<n;i++)
	{
		printf("\n Enter %d Element: ",i+1);
		scanf("%d",&a[i]);
	}
	
	for(i=n-1,j=0;i>=0;i--,j++)
	{
		b[j]=a[i];
	}
	
	printf("\nNew array elements are: \n");
	for(i=0;i<n;i++)
	{
		printf("%d \t",b[i]);
	}
}
