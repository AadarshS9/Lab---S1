/*Write a C program to write rank list of students (Rank No, Roll No, Name of the student and Total Mark of the student) into a file.*/
#include<stdio.h>
#include<stdlib.h>

struct record
{
	int rollno;
	char fname[30];
	char sname[30];	
	int total;
};

int main()
{
	int n;
	printf("Enter no. of entries: ");
	scanf("%d",&n);
	struct record s1[n];
	struct record temp;
	int i,j;
	FILE *fptr;
	
	fptr=fopen("a.txt","w+");
	fprintf(fptr,"Rank, Roll No, Name, Total Marks\n");
	for(i=0;i<n;i++)
	{
	printf("Enter details of Student %d \n",i+1);
	printf("Enter Roll number: ");
	scanf("%d",&s1[i].rollno);
	printf("Enter First Name: ");
	scanf("%s",s1[i].fname);
	printf("Enter Last Name: ");
	scanf("%s",s1[i].sname);
	printf("Enter total marks: ");
	scanf("%d",&s1[i].total);
	}
	for(i=0;i<n;i++)
		{
			for(j=0;j<(n-i-1);j++)
			{
				if(s1[j].total<s1[j+1].total)
				{
					temp=s1[j];
					s1[j]=s1[j+1];
					s1[j+1]=temp;
				}
			}
		}
	
	for(i=0;i<n;i++)
	{		
	fprintf(fptr,"Rank %d, ",i+1);
	fprintf(fptr,"%d, ",s1[i].rollno);
	fprintf(fptr,"%s %s, ",s1[i].fname,s1[i].sname);
	fprintf(fptr,"%d\n",s1[i].total);
	}
	printf("Results stored in file a.txt\n");
	}

