#include<stdio.h>
void main()
{
	int i,n,j,k,l,s;
	printf("Enter number of strings: ");
	scanf("%d",&s);
	n=s+1;
	char a[n][100],t[100];
	
	printf("Enter the strings of text: ");
	for (j=0;j<n;j++)
	{
			fgets(a[j],100,stdin);
	}
	
	
	printf("\nSorted elements are: \n");
	for(j=0;j<n*4;j++)
	{
		for(i=0;i<n-1;i++)
		{
			for(k=0;k<100;k++)
			{	if(a[i][k]=='\0' || a[i][k]=='\n')
					break;
				if(a[i][k]>a[i+1][k] && a[i][k]!=a[i+1][k])
				{
					/*printf("%c>%c,Y ",a[i][k],a[i+1][k]);*/		
					for(l=0;l<100;l++)
					{
						t[l]=a[i][l];
						a[i][l]=a[i+1][l];
						a[i+1][l]=t[l];
					}
					break;
				}
				else if(a[i][k]<a[i+1][k])
				{
					/*printf("%c>%c,N ",a[i][k],a[i+1][k]);*/
					break;
				}	
			}
			/*printf("\t#\n");*/
		}	
	}
	for (j=1;j<n;j++)
	{
		printf("%d=%s",j,a[j]);
	}
}
