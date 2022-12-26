#include<stdio.h>
#include<string.h>
void main()
{
	char string1[1000],string2[1000];
	int len1=0,len2=0,i,pos=0;
	printf("Enter First String: \n");
	gets(string1,sizeof(string1),stdin);
	printf("Enter Second String: \n");
	gets(string2,sizeof(string2),stdin);
	printf("Enter the position of String1 after which String 2 should be inserted \n");
	scanf("%d",&pos);
	
	for(i=0; string1[i]!='\0'; i++)
	{
	       len1++;
	}
	for(i=0; string2[i]!='\0'; i++)
	{
	       len2++;
	}
	
	
	for(i=pos; i<len1; i++)
	{
	       string1[i+len2]=string1[i];
	}
	for(i=0; i<len2; i++)
	{
	       string1[i+pos]=string2[i];
	}
	string2[len2+1]='\0';
	printf("\nNew string is:\n %s",string1);
}
