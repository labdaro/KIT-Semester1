//#include <stdio.h>
//main()
//{
//	int num1,num2,sum;
//	printf("Enter the two number to add\n");
//	scanf("%d %d", &num1, &num2);
//	
//	sum=add(num1,num2);   // function callling
//	printf("sum=%d\n",sum);
//	
//	printf("The result of add is:%d",add);
//	return 0;
//	
//}
//int add(int a, int b)   //function defination
//{
//	// Start of function defination
//	int add;
//	add=a+b;
//	return add;   
//	// return statement of function
//	// End of function defination	
//}
// void is mean nothing , no return value
//put viod no return value

//put new var if return value


#include<stdio.h>
int add(int a,int b);
int main()
{
	int num1,num2,sum;
	printf("Enter two number:");
	scanf("%d %d",&num1, &num2);
	sum=add(num1,num2);
	printf("%d",sum);
	return 0;
}
int add(int a, int b)
{
	int add;
	add=a+b;
	return add;
}
























