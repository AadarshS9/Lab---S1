/*Generate following cube series for a given level,for example if n=5, then 1,8,27,64,125*/
#include<stdio.h>
void main()
{
	int n,i=1,cube;
	printf("Enter number for range: ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		cube=i*i*i;
		printf("%d\t",cube);
		i++;
	}
}
