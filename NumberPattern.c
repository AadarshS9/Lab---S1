/*Print pattern
   1
 2 3 2
3 4 5 4 3
*/
#include<stdio.h>
void main()
{
	int i,s,n,k=0,j=0,m=0;
	printf("Enter the number of rows: ");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		s=1;
		while(s<n-i)
		{
			printf(" ");
			j++;
			s++;
		}
		while(k!=2*i-1)
		{
			if(j<=n-1)
			{
				printf("%d",i+k);
				j++;
			}
			else
			{
				m++;
				printf("%d",(i+k-2*m));
			}
			k++;
		}
		m=j=k=0;
		printf("\n");
		
		i++;
	}
}		
	
