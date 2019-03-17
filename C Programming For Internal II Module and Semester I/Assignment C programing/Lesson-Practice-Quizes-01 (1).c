//-----------------------------------------------------------------------------------Quiz No.1--------------------------------------------------------------------------------------------------------------------_
//This program is written to calculate the area of a rectangle with the given width and legnth from the user
//#include<stdio.h>
//main()
//{
//	float a,b,product;
//	printf("Enter the value of width   :");
//	scanf("%f",&a);
//	printf("Enter the value of length   :");
//	scanf("%f",&b);
//	product = a*b;
//	printf("The area of this rectangle is %.2f",product);
//}

//-----------------------------------------------------------------------------------Quiz No.2--------------------------------------------------------------------------------------------------------------------_
//This program is written to get a character input from the user and show the ascii value of that character
//#include<stdio.h>
//main()
//{
//	char a;
//	printf("Enter a character    :");
//	scanf(" %c",&a);
//	printf("The ASCII value of that character is %d",a);
//}

//-----------------------------------------------------------------------------------Quiz No.3--------------------------------------------------------------------------------------------------------------------_
//This program is written to convert the Celsius value to the Fahrenheit value 
//#include<stdio.h>
//main()
//{
//	float cel,fah;
//	printf("Enter the Celsius value    :");
//	scanf("%f",&cel);
//	fah = ((cel*9/5) + 32);
//	printf("The Fahrenheit value of this value is %.2f",fah);
//}
//-----------------------------------------------------------------------------------Quiz No.4--------------------------------------------------------------------------------------------------------------------_
//This program is written to swap the value of 2 variables which values are given by the user
//#include<stdio.h>
//main()
//{
//	int a,b,a1,b1;
//	printf("Enter the value of a    :");
//	scanf("%d",&a);
//	printf("Enter the value of b    :");
//	scanf("%d",&b);
//	a1 =b;
//	b1 =a;
//	printf("The value of a is actually %d\n",a1);
//	printf("The value of b is actually %d\n",b1);
//}

//-----------------------------------------------------------------------------------Quiz No.5--------------------------------------------------------------------------------------------------------------------_
//This program is written to check whether the given number from the user is odd or even
//#include<stdio.h>
//main()
//{
//	int a;
//	printf("Enter a value     :");
//	scanf("%d",&a);
//	if(a%2==0)
//	{
//		printf("The given value is even\n");
//	}
//	else
//	{
//		printf("The given value is odd\n");
//	}
//}

//-----------------------------------------------------------------------------------Quiz No.6--------------------------------------------------------------------------------------------------------------------_
//This program is written to check whether the given input is a vowel or a consonant
//#include<stdio.h>
//main()
//{
//	char a;
//	printf("Enter one lower-case character    :");
//	scanf(" %c",&a);
//	switch(a)
//	{
//		case 'a':
//			printf("The given character is a vowel");
//			break;
//		case 'e':
//			printf("The given character is a vowel");
//			break;
//		case 'i':
//			printf("The given character is a vowel");
//			break;
//		case 'o':
//			printf("The given character is a vowel");
//			break;
//		case 'u':
//			printf("The given character is a vowel");
//			break;
//		default:
//			printf("The given character is a consonant");
//	}
//}

//-----------------------------------------------------------------------------------Quiz No.7--------------------------------------------------------------------------------------------------------------------_
//This program is written to compare and find the greatest value among the three given inputs from the user. It will show all values are equal, if you enter the same numbers
//#include<stdio.h>
//main()
//{
//	int a,b,c;
//	printf("Enter the value of a     :");
//	scanf("%d",&a);
//	printf("Enter the value of b     :");
//	scanf("%d",&b);
//	printf("Enter the value of c     :");
//	scanf("%d",&c);
//	if (a==b && b==c)
//	{
//		printf("The values are equal");
//	}
//	else
//	{
//		if(a>=b&&a>=c)
//		{
//			printf("%d is the greatest value\n",a);
//		}
//		else if(b>=a&&b>=c)
//		{
//			printf("%d is the greatest value\n",b);	
//		}
//		else if(c>=b&&c>=a)
//		{
//			printf("%d is the greatest value\n",c);
//		}
//	}
//}

//-----------------------------------------------------------------------------------Quiz No.8--------------------------------------------------------------------------------------------------------------------_
//This program is written to check whether the year is a leap year or not. A leap year follows 2 conditions.
//1. That year must be divisible by 4
//2. The leap years skip every 100 years execept for those years that are divisible by 400
//#include<stdio.h>
//main()
//{
//	int year;
//	printf("Enter the year    :");
//	scanf("%d",&year);
//	if (year%100==0)
//	{
//		if(year%400==0)
//		{
//			printf("The year entered above is a leap year");
//		}
//		else
//		{
//			printf("The year entered above isn't a leap year");
//		}
//	}
//	else if(year%4==0)
//	{
//		printf("The year entered above is a leap year");
//	}
//	
//	else
//	{
//			printf("The year entered above isn't a leap year");
//
//	}
//}

//-----------------------------------------------------------------------------------Quiz No.9--------------------------------------------------------------------------------------------------------------------_
//This program is written to check the given input whether it is positive or negative. If the user type 0, it will show that 0 is neither negative nor positive
//#include<stdio.h>
//main()
//{
//	int a;
//	printf("Enter a value    :");
//	scanf("%d",&a);
//	if (a>0)
//	{
//		printf("The given value is positive");
//	}
//	else if (a==0)
//	{
//		printf("The given value is 0. According to researches, it's considered neither positive nor negative");
//	}
//	else
//	{
//		printf("The given value is negative");
//	}
//}

//-----------------------------------------------------------------------------------Quiz No.10--------------------------------------------------------------------------------------------------------------------_
//This program is written to solve the Quadratic Equation but giving the value of the coefficients in form of a,b and c
#include<stdio.h>
#include<math.h>
main()
{
	int a,b,c;
	float deta,x1,x2;
	
	printf("The following program of solving Quadratic Equation follows this format ax^2 + bx +c = 0\n\n\n\n");
	printf("Enter the value of a    :");
	scanf("%d",&a);
	printf("Enter the value of b    :");
	scanf("%d",&b);
	printf("Enter the value of c    :");
	scanf("%d",&c);
	deta = pow(b,2) - (4*a*c);
	if (deta<0)
	{
		printf("The above equation is resulted in complex roots. Type 'c' to continue\n");
		char c;
		scanf(" %c",&c);
		if (c=='c')
		{
				deta = -deta;
			printf("The value of x1 = ((-%d) + iv(%.2f))/(%d)\n",b,deta,2*a);
			printf("The value of x1 = ((-%d) - iv(%.2f))/(%d)",b,deta,2*a);
		}
	}
	else if(deta==0)
	{
		x1=x2=((-b)/(2.0*a));
		printf("The value of x1=x2=%.2f",x1);
	}
	else
	{
		x1 = ((-b)+(sqrt(deta)))/(2*a);
		x2 = ((-b)-(sqrt(deta)))/(2*a);
		printf("The value of x1=%.2f\nThe value of x2=%.2f",x1,x2);

	}
	
}

