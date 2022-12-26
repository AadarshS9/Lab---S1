/*Print Floyd's Triangle
1
2 3
4 5 6
7 8 9 10
*/
#include<stdio.h>
void main()
{
	int num,i=1,j=1,s;
	printf("Enter number of rows: ");
	scanf("%d",&num);
	printf("\n");
	while(i<=num)
	{
		s=1;
		while(s<=i)
		{
			printf("%d ",j);
			j++;
			s++;
		}
		i++;
		printf("\n");
	}
}
