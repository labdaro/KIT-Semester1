//#include<stdio.h>
//int sum(int n);
//int main()
//{
//	int num,add;
//	printf("Enter a positive integer:\n");
//	scanf("%d",&num);
//	add=sum(num);
//	printf("sum=%d",add);
//}
//int sum(int n)
//{
//	if(n==0)
//	return n;
//	else
//	return n+sum(n-1);
//}

//#include<stdio.h>
//int factorial(int n);
//int main()
//{
//	int n,result;
//	printf("Enter a positive integer");
//	scanf("%d",&n);	
//	
//    result=factorial(n);
//    printf("The factorail is: %d",result);
//	
//}
//int factorial(int n)
//{
//	if(n!=1)
//	return n*factorial (n-1);
//	
//}
#include<stdio.h>
int factorail(int n);
int main()
{
	int n,result;
	printf("Enter the number:");
	scanf("%d",&n);
	result=factorail(n);
	printf("%d",result);
	return 0;

}

int factorail (int n)
{
	if (n!=1)
	return n*factorail (n-1);
}





















