/*Calculator*/
#include <stdio.h>
#include <math.h>
void main()
{
	int function;
	int n,r,sol=0,i=1;
	int a,b,c;
	float x,y,ans;
	double dx,dy,dans;
	printf(" ________________________________________________________________________________________________________\n");
	printf(" |__________________________________________Calculator__________________________________________________|\n");
	printf(" | This Mini-calculator can perform the following functions: \t\t\t\t\t\t|\n | 1. Addition of two numbers (x+y)\t\t 2. Subtraction of two 	numbers (x-y) \t\t\t|\n | 3. Multiplication of two numbers (x*y)\t 4. Division of two numbers (x/y) \t\t\t|\n | 5. Modulus of two numbers \t\t\t 6. Square of a number \t\t\t\t\t|\n | 7. Square root of a number \t\t\t 8. A number raised to the power of another number (x^y)|\n | 9. Reciprocal (1/x) \t\t\t\t 10. Number factorial (x!) \t\t\t\t|\n | 11. Dollars to Rupees Conversion\t\t 12. Rupees to Dollars Conversion \t\t\t|\n | 13. Decimal to Binary Conversion\t\t 14. Decimal to Octal Conversion \t\t\t|\n | 15. Exit \t\t\t\t\t\t\t\t\t\t\t\t|\n ");
	printf("________________________________________________________________________________________________________\n");
	
	
	while(1)
	{
		printf("Kindly choose the desired function: ");
		scanf("%d",&function);

		if(function==1)
		{
			printf("Enter the first value: ");
			scanf("%f",&x);
			printf("Enter the second value: ");
			scanf("%f",&y);
			ans=x+y;
			printf("The answer is: %0.0f\n",ans);
		}
		else if(function==2)
		{
			printf("Enter the first value: ");
			scanf("%f",&x);
			printf("Enter the second value: ");
			scanf("%f",&y);
			ans=x-y;
			printf("The answer is: %0.0f\n",ans);
		}
		else if(function==3)
		{
			printf("Enter the first value: ");
			scanf("%f",&x);
			printf("Enter the second value: ");
			scanf("%f",&y);
			ans=x*y;
			printf("The answer is: %0.0f\n",ans);
		}
		else if(function==4)
		{
			printf("Enter the first value: ");
			scanf("%f",&x);
			printf("Enter the second value: ");
			scanf("%f",&y);
			ans=x/y;
			printf("The answer is: %0.0f\n",ans);
		}
		else if(function==5)
		{
			printf("Enter the first value: ");
			scanf("%d",&a);
			printf("Enter the second value: ");
			scanf("%d",&b);
			c=a%b;
			printf("The answer is: %d\n",c);
		}
		else if(function==6)
		{
			printf("Enter the value: ");
			scanf("%f",&x);
			ans=x*x;
			printf("The answer is: %0.0f\n",ans);
		}
		else if(function==7)
		{
			printf("Enter the  value: ");
			scanf("%f",&x);
			ans=sqrt(x);
			printf("The answer is: %f\n",ans);
		}
		else if(function==8)
		{
			printf("Enter the first value: ");
			scanf("%lf",&dx);
			printf("Enter the second value: ");
			scanf("%lf",&dy);
			double dans=pow(dx,dy);
			printf("The answer is: %0.2lf\n",dans);
		}
		else if(function==9)
		{
			printf("Enter the value: ");
			scanf("%f",&x);
			ans=1/x;
			printf("The answer is: %0.3f\n",ans);
		}
		else if(function==10)
		{
			printf("Enter the value: ");
			scanf("%d",&a);
			b=c=1;
			while(c<=a)
			{
				b=b*c;
				c++;
			}
			printf("The answer is: %d\n",b);
		}
		else if(function==11)
		{
			printf("Enter the value: ");
			scanf("%f",&x);
			printf("Enter the exchange rate value: ");
			scanf("%f",&y);
			ans=x*y;
			printf("The exchange value is: %0.2f rupees\n",ans);
		}
		else if(function==12)
		{
			printf("Enter the value: ");
			scanf("%f",&x);
			printf("Enter the exchange rate value: ");
			scanf("%f",&y);
			ans=x*y;
			printf("The exchange value is: %0.2f dollars\n",ans);
		}
		else if(function==13)
		{
			printf("Enter the value: ");
			scanf("%d",&n);
			sol=0;
			i=1;
			while(n>0)
			{
				r=n%2;
				n=n/2;
				sol=sol+r*i;
				i=i*10;
			}
			printf("The answer is: %d\n",sol);
		}
		else if(function==14)
		{
			printf("Enter the value: ");
			scanf("%d",&n);
			sol=0;
			i=1;
			while(n>0)
			{
				r=n%8;
				n=n/8;
				sol=sol+r*i;
				i=i*10;
			}
			printf("The answer is: %d\n",sol);
		}
		else if(function==15)
		{
			printf("You have succesfully exited the program. ");
			break;
		}
		else
		{
			printf("Wrong Input\n");
		}
	}
}	
