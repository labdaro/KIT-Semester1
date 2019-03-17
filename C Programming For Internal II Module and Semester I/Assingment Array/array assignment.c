
															// the big number
//#include <stdio.h>
//main()
//{
//	int a[4];
//	printf("Enter the five number:\n");
//	scanf("%d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4]);
//	if(a[0]>a[1]&&a[0]>a[2]&&a[0]>a[3]&&a[0]>a[4])
//	printf("\n The big number is :%d",a[0]);
//
//	else if(a[1]>a[0]&&a[1]>a[2]&&a[1]>a[3]&&a[1]>a[4])
//	printf("\n The big number is :%d",a[1]);
//	
//	else if(a[2]>a[0]&&a[2]>a[1]&&a[2]>a[3]&&a[1]>a[4])
//	printf("\n The big number is :%d",a[2]);
//
//	else if(a[3]>a[0]&&a[3]>a[1]&&a[3]>a[2]&&a[3]>a[4])
//	printf("\n The big number is :%d",a[3]);
//	
//	else if(a[4]>a[0]&&a[4]>a[2]&&a[4]>a[3]&&a[4]>a[1])
//	printf("\n The big number is :%d",a[4]);
//	
//}
														//			(The small number)
//#include<stdio.h>
//main()
//{
//	int a[4];
//	printf("Enter the five numbers:\n");
//	
//	scanf("%d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4]);
//	if(a[0]<a[1]&&a[0]<a[2]&&a[0]<a[3]&&a[0]<a[4])
//	printf("\n The small number is :%d",a[0]);
//
//	else if(a[1]<a[0]&&a[1]<a[2]&&a[1]<a[3]&&a[1]<a[4])
//	printf("\n The small number is :%d",a[1]);
//	
//	else if(a[2]<a[0]&&a[2]<a[1]&&a[2]<a[3]&&a[1]<a[4])
//	printf("\n The small number is :%d",a[2]);
//
//	else if(a[3]<a[0]&&a[3]<a[1]&&a[3]<a[2]&&a[3]<a[4])
//	printf("\n The small number is :%d",a[3]);
//	
//	else if(a[4]<a[0]&&a[4]<a[2]&&a[4]<a[3]&&a[4]<a[1])
//	printf("\n The small number is :%d",a[4]);
//	else if(a[1]==a[0]&&a[1]==a[2]&&a[1]==a[3]&&a[1]==a[4])
//	printf("\nAll number are equal!");
//	
//}
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
//	     	j/=10;
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
                  
				  
				  										// Find the number of digit
//#include <stdio.h>
//main()
//{
//float number,count;
//	printf("\n Enter the number :");
//	scanf("%d",&number);
//	
//	while (number>0)
//	{
//		number=number/10;
//		count=count+1;
//	}
//	printf("\n Number of Digits in a given number:%d",count);
//
//}
															//Reverse the number
//
#include <stdio.h>
 
main()
{
	int a,c;
	printf("Enter the number: ");
	scanf("%d",&a);
	
	while(a!=0)
	{
		c=a%10;
		a=a/10;
		printf("%d",c);
	}
}


							// Fibonacci
//#include <stdio.h>
// main()
//{
//  int a=0,b=1,c,d,i;
//  printf("Enter the number:");
//  scanf("%d", &d);
//  
//  for(i=0;i<d;i++)
//  {
//  	c=a+b;
//  	a=b;
//  	b=c;
//  	printf("%d",c);
//  }
//  
//}
		
//#include<stdio.h>
//main()
//{
//	int a,b,c[10];
//	printf("Reverse the number:\n");
//	scanf("%d",&a);
//	
//	for(b=0;b<15	;b++)
//	{
//		c[b]=a%10;
//		a=a/10;
//		printf("%d",c[b]);
//	}
//	
//}
//

//#include <stdio.h>
//main()
//{
//	int a,count=0;
//	printf("Enter the number:");
//	scanf("%d",&a);
//	
//	while(a!=0)
//	{
//		a=a/10;
//		count=count+1;
//	}
//	printf("The digit of number is:%d",count);
//}
//
//#include<stdio.h>
//main()
//{
//	char cha;
//	printf("Enter the choice:\n");
//	scanf("%c",&cha);
//	
//	if(cha=='a'||cha=='e'||cha=='o'||cha=='i'||cha=='u')
//	{
//		printf("Is vowel");
//	}
//	else
//	{
//		printf("consanant"); 
//	}
//}

//#include<stdio.h>
//main()
//{
//	int a, num,i;
//	printf("Enter the number:");
//	scanf("%d",&num);
//	
//	while(num!=0)
//	{
//		num=num%10;
//		a=a/10;
//		
//	}
//	printf("%d",num);
//	
//}


//Palindrome Number example : 121 return it still 121 the same value
//	main()
//{
//	int a,b,c,d=0;
//	printf("Enter The Number: ");
//	scanf("%d",&a);
//	c=a;
//	while(c!=0)
//	{
//		b=c%10;
//		c=c/10;
//		d+=b;
//		d*=10;	
//	}
//	d/=10;
//	if(a==d)
//		printf("%d is a Palindrome Number.",d);
//	else
//		printf("%d is not a Palindrome Number.",d);
//}



//smallest number using array
//#include<stdio.h>   
//main()
//{
//
//int a[5],i,b;
//printf("Enter the five numebr:");
//for(i=0;i<5;i++)
//{
//	scanf("%d",&a[i]);
//
//}
//	b=a[0];
//	
//for(i=1;i<5;i++)
//{
//	if (b>a[i])
//	b=a[i];
//}
//printf("%d is the smallest value.",b);
//	
//	
//}
// sum of the digit
//
//#include<stdio.h>
//main()
//{
//	int a,i,c=0,b;
//	printf("Enter the number:");
//	scanf("%d",&a);
//	while(a!=0)
//	{
//		b=a%10;
//		c+=b;
//		a/=10;
//	}
//	printf("%d",c);
//}
















