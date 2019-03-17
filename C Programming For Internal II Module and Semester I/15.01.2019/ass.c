#include <stdio.h>
int main()
{
	
	int a,b,c;
	printf("Enter the value of a:\n");
	scanf("%d", &a);
	
	printf("enter the value of b:\n");
	scanf("%d", &b);
	
	printf("enter the value of c:\n");
	scanf("%d", &c);
	
	if(a>b && a>c)
	{
		printf("a is the greater");
	}
	else if (b>a && b>c )
	{
		printf("b is greater");
		
	}
	else if(c>a && b>a)
	{
		printf("c is greater");
	}
	else if (a==b && c>a)
	{
		printf("C is greater");
	}
	else if (a==c&& b>c)
	{
		printf("b is greater");
	}
	else if (b==c &&a>b)
{
	printf("a is greater");
}
	else if (a==b==c)
	{
		printf("All value is equal");
	}
}
