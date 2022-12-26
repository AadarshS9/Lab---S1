#include<stdio.h>
void main()
{
	char str[100];
   	int length,i=0;
    
   	printf("\nEnter a single string : ");
        scanf("%s",&str);
        
        char *ptr=str;
        for(i=0;*ptr != '\0';i++)
        {
        	length++;
        	ptr++;
        }
       
        printf("The length of the string %s is : %d\n", str, length);
}
        	
