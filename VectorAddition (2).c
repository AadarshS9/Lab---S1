/*Perform vector addition using arrays*/
#include<stdio.h>
void main()
{
	int n,i;
	printf("Enter vector size: ");
	scanf("%d",&n);
	int a[n],b[n],c[n];
	
	printf("Elements of Vector A: \n");
	for(i=0;i<n;i++)
	{
		printf("\n Enter %d Element: ",i+1);
		scanf("%d",&a[i]);
	}
	
	printf("Elements of Vector B: \n");
	for(i=0;i<n;i++)
	{
		printf("\n Enter %d Element: ",i+1);
		scanf("%d",&b[i]);
	}
	
	for(i=0;i<n;i++)
	{
		c[i]=a[i]+b[i];
	}
	
	printf("\nAddition vector is: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",c[i]);
	}
}
