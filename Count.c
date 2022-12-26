#include<stdio.h>
void main()
{
	char string[1000];
	int wordcount=0,linecount=0,charactercount=0,i;
	printf("Enter set of text:\n");
	fgets(string,sizeof(string),stdin);
	
	for(i=0;i<sizeof(string);i++)
	{
		if(string[i]=='\0')
		
			break;
		
		else if(string[i]==' ' || string[i]=='.' || string[i]=='!'|| string[i]=='?')
		
			wordcount++;
			
		
		if(string[i]=='?' || string[i]=='.' || string[i]=='!'|| string[i]=='?')
		
			linecount++;
			
		
		else if(string[i]!=' ' || string[i]=='.')
		
			charactercount++;
			
		
	}
	printf("\nCharacter count = %d\n", charactercount-1);
   printf("Word count = %d\n", wordcount);
   printf("Line count = %d\n", linecount);
   }
		
		
