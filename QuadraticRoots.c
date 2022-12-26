/*Program to find rooots of a quadratic equation*/
#include<stdio.h>
void main()
{
	int a,b,c,determinant;
	float root1,root2,temp,sqrt;
	
	printf("The general quadratic equation is of the form: ax^2 + bx + c = 0\n");
	printf("Enter the value of a: \n");
	scanf("%d",&a);
	printf("Enter the value of b: \n");
	scanf("%d",&b);
	printf("Enter the value of c: \n");
	scanf("%d",&c);
	
	determinant=b*b-4*a*c;
	sqrt=determinant/2;
	temp=0;
	
	if(determinant==0)
	{
		root1=-b/2.0*a;
		root2=root1;
		printf("First root is: %f\n",root1);
		printf("Second root is: %f\n",root2);
		printf("Hence,both roots are equal.\n");
	}
	else if(determinant>0)
	{
		printf("Both roots are real and distinct.\n");
		while(sqrt!=temp)
		{
			temp=sqrt;
			sqrt=(determinant/temp +temp)/2;
		}
		root1=(-b+sqrt)/(2*a);
		root2=(-b-sqrt)/(2*a);
		printf("First root is: %f\n",root1);
		printf("Second root is: %f\n",root2);
	}
	else
	printf("Roots are imaginary\nNo solution\n");
}
