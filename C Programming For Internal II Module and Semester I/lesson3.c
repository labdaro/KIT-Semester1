//#include <stdio.h>
//main()
//
//{
//	
//int a =12;
//char ch='h';
//int sum=a+ch;
//printf("sum = %d\n", sum);
//
//	
//	
//	
//	
//}
#include<stdio.h>
main()
{
	int num,i,flag=0;
	printf("Enter positive integer enter to check:");
	scanf("%d",&num);
	
	for(i=2;i<=num/2;i++)
	{
		if(num%1==0)
		{flag=1;
		}
	}
	if(flag==1)
	{
	printf("%d is not prime",num);
	}
	else
	{
		printf("%d is a prime");
	}
}
