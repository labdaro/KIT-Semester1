//#include <stdio.h>
//main()
//{
//	int i,n,sum=0;
//	printf("enter the value for n:\n");
//	scanf("%d", &n);
//	
//	for (i=0;i<=n;i++)
//	{
//		sum=sum+i;
//		printf("%d+ %d\n",sum,i);
//	}
//	printf("The sum of all number is:%d\n", sum);
//}
//	
//}
#include<stdio.h>
main()
{
	int a,b,Result;
	printf("Enter the number of factorail:\n");
	scanf("%d", &a);
	
	for(b=1;b<=a;b++)
	{
		Result=Result*b;
		printf("each fact is :%d\n", Result);
	}
	printf("The factorail is %d:",Result);
}
