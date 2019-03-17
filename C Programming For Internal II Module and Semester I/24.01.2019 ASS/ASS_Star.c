//#include<stdio.h>
//main()
//{
//	int i,j;
//	for(i=1;i<=10;i++)
//	{
//		for(j=1;j<=i;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//Output
//*
//**
//***
//****
//*****


//#include<stdio.h>
//main()
//{
//	int i,j;
//	for(i=1;i<=10;i++)
//	{
//		for(j=10;j>=i;j--)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}
//	Output
//	*****
//	****
//	***
//	**
//	*
	
//	#include<stdio.h>
//	main()
//{
//	int i,j,k,a;
//	scanf("%d",&a);
//	for(i=0;i<=a;i++)
//	{
//		for(j=1;j<=i;j++)
//		{
//			printf(" ");
//		}
//		for(k=a;k>i;k--)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}
//
//+output
//*****
// ****
//  ***
//   **
//    *	
//	
//	#include<stdio.h>
//	main()
//	{
//		int i,j,k,a;
//		scanf("%d",&a);
//		for(i=0;i<=a;i++)
//		{
//			for(j=a;j>i;j--)
//			{
//				printf(" ");
//				
//			}
//			for(k=0;k<i;k++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//	}
//	
//	+output : input 5
//	     *
//        **
//       ***
//      ****
//     *****
//	        
//	#include<stdio.h> 
//	  main()
//{
//	int i,j,k,a;
//	printf("Enter the value of a:");
//	scanf("%d",&a);
//	for(i=0;i<=a;i++)
//	{
//		for(j=a;j>i;j--)
//		{
//			printf(" ");
//		}
//		for(k=0;k<i;k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//} 
//	Output 
//	     *
//	    **
//	   ***
//	  ****
//	
	
//	#include<stdio.h>
//	 main()
//{
//	int i,j,k,a;
//	printf("Enter the value of a:");
//	scanf("%d",&a);
//	for(i=0;i<=a;i++)
//	{
//		for(j=a;j>i;j--)
//		{
//			printf(" ");
//		}
//		for(k=0;k<=i;k++)
//		{
//			printf(" *");
//		}
//		printf("\n");
//	}
//} 
//	
//	


//		+output 
//		Paramid of star




	
	//ARMSTRONG

//#include<stdio.h>
// main()
//{
//	int i,j,k,l=0,m,n;
//	printf("Please enter three digits number: ");
//	scanf("%d",&i);
//	
//	j=i;
//	
//	while(j != 0 )
//	{
//		k = j%10;
//		l += k*k*k;
//		j/=10;
//	}
//	if(l==i)
//	{
//		printf("%d is armstrong number",i);
//	}
//	else
//	{
//		printf("%d is not armstrong number",i);
//	}
//} 

//#include<stdio.h>
//main()
//	{
//		int i=1,a,j;
//		scanf("%d", &a);
//		
//		for(i=1;i<=a;i++)
//		{
//			for(j=1;j<=i;j++)
//			{
//				printf("%d",i);
//			}
//			printf("\n");
//		}
//		
//	}
//	
//	+output :5
//	1
//	22
//	333
//	4444
//	55555
//	
//#include<stdio.h>
//main()
//{
//	int a,i,j,k,b=1;
//	scanf("%d",&a);
//	
//for(i=1;i<=a;i++)
//{
//	for(j=5;i<=j;j--)
//	{
//		printf(" ");
//	}
//	
//	for(k=1;k<=i;k++)
//	{
//		printf("%d,",b);
//		b++;
//	}
//	printf("\n");
//}
//}
//#include <stdio.h>
//main()
//{
//	int i,a=5,j,k;
//	for(i=1;i<=5;i++)
//	{
//		for(j=1;j<=i;j++)
//		{
//			printf("%d",a);
//		}
//		a--;
//		printf("\n");
//	}
//}
//	+output
//	5
//	44
//	333
//	2222
//	11111
//#include <stdio.h>
//main()
//{
//	int i,j,a=5;
//	for(i=1;i<=5;i++)
//	{
//		for(j=5;j>=i;j--)
//		{
//			printf("%d",a);
//		}
//		a--;
//		printf("\n");
//	}
//	
//}
//
//+OUTPUT
//55555
//4444
//333
//22
//1
//#include<stdio.h>
//main()
//{
//	int i,j,a=1;
//	for(i=1;i<=5;i++)
//	{
//		for(j=5;j>=i;j--)
//		{
//			printf("%d",a);
//			
//		}
//		a++;
//		printf("\n");
//	}
//}
//
//
//+output
//11111
//2222
//333
//44
//5

//#include<stdio.h>
//main()
//{
//	int i,j,k,a=5;
//	for(i=1;i<=5;i++)
//	{
//		for(j=1;j<=i;j++)
//		{
//			printf(" ");
//		}
//		for(k=5;k>=i;k--)
//		{
//			printf("%d",a);
//	
//		}
//				a--;
//		printf("\n");
//	}
//}
//+ output
//55555
// 4444
//  333
//   22
//    1
#include<stdio.h>
main()
{
	int i,k,j,a=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("%d",a);
		}
		a+2;
		printf("\n");
	}
}
































