#include<stdio.h>
int main()
{
	int var1, var2;
	
	
	printf("Enter the value of var1\n");
	scanf("%d", &var1);
	printf("enter the value of var2\n");
	scanf("%d", &var2);
	
	if(var1!=var2)
{
	printf("The var1 is not equal the var2");
	if (var1>var2)
	{
		printf("Var1 is greater than var2");
	}
	else
	{
		printf("Var2 is greater than var1");
	}
 } 
 else
 {
 	printf("var 1 is equal var2");
 }
}
