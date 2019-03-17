//#include <stdio.h>						(Area of a rectangle)
//main()
//{
//	float width,height,area;
//	printf("Enter the value of width:\n");
//	scanf("%f", &width);
//	
//	printf("Enter the value of height:\n");
//	scanf("%f", &height);
//	area = width*height;
//	
//	printf("The area of rectangle is: %.2f",area);
//}
//
//#include<stdio.h> 								(Find ASCII value of a character)
//main()
//{
//	char character;
//	printf("Enter the character:\n");
//	scanf("%c", &character);
//	printf("The ASCII value is:%",character);
//}
//
//#include <stdio.h>						( COnvert Celsius to Fahrenheit)
//main()
//{
//	float a,b;
//	printf("Enter the Celsius value:\n");
//	scanf("%f", &a);
//
//	b=(a*9/5)+32;
//	printf("The value Fahrenheit is:%.2f", b);
//}
//#include <stdio.h>						(Swap value of two value)
//main()
//{
//int	a,b,c,d;
//	printf("a:");
//	scanf("%d", &a);
//	
//	printf("b:");
//	scanf("%d",&b);
//	printf("These number will swap\n");
//	
//	c=a;
//	d=b;
//	printf("a:%d\n",d);
//	printf("b:%d",c);
//}
//										(Check the number is Even or Odd number)
//#include<stdio.h>
//main()
//{
//	int number;
//	printf("Enter the number:\n");
//	scanf("%d", &number);
//	if(number%2==0)
//	{
//		printf("Your number is Even ");
//	}	
//	else
//	{
//		printf("Your number is Odd");
//	}
//}
//

//#include <stdio.h>						(Check whether a character is vowel or consonant)
// 
//int main()
//{
//  char ch;
// 
//  printf("Enter a character\n");
//  scanf("%c", &ch);
// 
// 
//  if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch =='o' || ch=='O' || ch == 'u' || ch == 'U')
//    printf("%c is a vowel.\n", ch);
//  else
//    printf("%c isn't a vowel.\n", ch);
//     
//} 
//
	//										( Check largest among three numbers)
//#include <stdio.h>
//main()
//
//{	int a,b,c;
//	printf("Enter the a:\n");
//	scanf("%d", &a);
//	printf("Enter the b:\n");
//	scanf("%d", &b);
//	
//	printf("Enter c:\n");
//	scanf("%d", &c);
//	
//	if(a==b&&a==c&c==b)
//	printf("All numbers are equal");
//	else if(a>b&&a>c)
//	printf("a is greater");
//	else if(b>a&&b>c)
//	printf("b is greater");
//	
//	else if(c>a&&c>b)
//	printf("c is great");
//	
//	else if(a==b &&c>a)
//	printf("c is the greater");
//	
//	else if(a==c&&b>a)
//	printf("b is greater");
//	
//	else if(c==b&&a>b)
//	printf("a is greater");
//	else if(a==b&&a>c)
//	printf("a and b are equal and greater than c");
//	else if(a==c&&a>b)
//	printf("a and c are equal and greater than b");
//	else if(b==c&&c>a)
//	printf("b and c are equal and greater than a");
//}
//
//											( Postive negative checking )
//
//#include<stdio.h>
//main()
//{
//	float a;
//	printf("Enter the number:\n");
//	scanf("%f", &a);
//	
//	if(a>0)
//	printf("The number is postive");
//	else if(a<0)
//	printf("The number is Negative");
//	else is (a==0)
//	printf("The number is equal 0");
//
//
//}
//
//
///*							(Checking Leab Number)
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
//*/

////}
//						(quadratic )

//#include<stdio.h>
//#include<math.h>
//main()
//{
//	int a,b,c;
//	float deta,x1,x2;
//	
//	printf("The standard form of a quadratic is a^2+bx+c=0\n");
//	printf("a,b,c are coefficient\n");
//	printf("Enter the value of a:");
//	scanf("%d",&a);
//	printf("Enter the value of b:");
//	scanf("%d",&b);
//	printf("Enter the value of c:");
//	scanf("%d",&c);
//	deta = b*b - (4*a*c);
//	if (deta<0)
//	{
//			printf("The value of x1 = ((-%d) + iv(%.2f))/(%d)\n",b,deta,2*a);
//			printf("The value of x1 = ((-%d) - iv(%.2f))/(%d)",b,deta,2*a);
//		
//	}
//	else if(deta==0)
//	{
//		x1=x2=((-b)/(2*a));
//		printf("The value of x1=x2=%.2f",x1);
//	}
//	else
//	{
//		x1 = ((-b)+(sqrt(deta)))/(2*a);
//		x2 = ((-b)-(sqrt(deta)))/(2*a);
//		printf("The value of x1=%.2f\nThe value of x2=%.2f",x1,x2);
//
//	}
//	
//}

//

//#include<stdio.h>
//main()
//{
//	int a=0,b=1,c,d,i;
//	scanf("%d",&d);
//	for(i=0;i<d;i++)
//{
//	c=a+b;
//	a=b;
//	b=c;
//	printf("%d\n",c);
//	}	
//	
// } 
//
//#include<stdio.h>
//main()
//{
//	int num,i,count=0;
//	printf("enter the number:");
//	scanf("%d",&num);
//while(num!=0)
//	{
//		num=num/10;
//		count=count+1;
//			printf("The digit IS:%d",count);
//	}
//
//	
//}
		// Check The Prime number ot not

//#include<stdio.h>
// 
//main()
//{
//   int n, c = 2;
//   
//   printf("Enter a number to check if it is prime\n");
//   scanf("%d",&n);
// 
//   for ( c = 2 ; c <= n - 1 ; c++ )
//   {
//      if ( n%c == 0 )
//      {
//         printf("%d isn't prime.\n", n);
//     break;
//      }
//   }
//   if ( c == n )
//      printf("%d is prime.\n", n);
//       
//   return 0;
//}
#include <stdio.h>
 
int main()
{
  int m, n, p, q, c, d, k, sum = 0;
  int first[10][10], second[10][10], multiply[10][10];
 
  printf("Enter number of rows and columns of first matrix\n");
  scanf("%d%d", &m, &n);
  printf("Enter elements of first matrix\n");
 
  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      scanf("%d", &first[c][d]);
 
  printf("Enter number of rows and columns of second matrix\n");
  scanf("%d%d", &p, &q);
 
  if (n != p)
    printf("The matrices can't be multiplied with each other.\n");
  else
  {
    printf("Enter elements of second matrix\n");
 
    for (c = 0; c < p; c++)
      for (d = 0; d < q; d++)
        scanf("%d", &second[c][d]);
 
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++) {
        for (k = 0; k < p; k++) {
          sum = sum + first[c][k]*second[k][d];
        }
 
        multiply[c][d] = sum;
        sum = 0;
      }
    }
 
    printf("Product of the matrices:\n");
 
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++)
        printf("%d\t", multiply[c][d]);
 
      printf("\n");
    }
  }
 
  return 0;
}
