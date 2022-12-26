/*Print star pyramid pattern 
   *
  * *
 * * *
* * * *
*/
#include<stdio.h>
void main()
{
	int i,j,n,s;
	printf("Enter the number of rows: ");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		s=1;
		while(s<n-i)
		{
			printf(" ");
			s++;
		}
		j=1;
		while(j<=i)
		{
			printf("*");
			printf(" ");
			j++;
		}
		i++;
		printf("\n");
	}
}
	
