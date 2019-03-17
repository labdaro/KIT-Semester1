//[A] What would be the output of the following programs:
//	(a)
//
//#include<stdio.h>
//main()
//{
//	int j;
//	while (j<=10)
//	{
//		printf("\n%d", j);
//		j=j+1;
//	} 
//}
//		+Output
//		0
//		1
//		2
//		3
//		4
//		5
//		6
//		7
//		8
//		9
//		10
//	
//(b)
//#include<stdio.h>
//main()
//{
//	int i=1;
//	while (i<=10);
//	{
//		printf("\n%d", i);
//		i++;
//	}
//}
//		+ Output 
//		No output because we ";" in while the program end and can not execute all of anything.

//(c)
//#include<stdio.h>
//main()
//{
//	int j;
//	while (j<=10)
//	{
//		printf("\n%d",j);
//		j=j+1;
//	}		
//}
//		+output
//		0
//		1
//		2
//		3
//		4
//		5
//		6
//		7
//		8
//		9
//		10
//	(d)
//	#include<stdio.h>
//	main()
//	{
//		int x=1;
//		while(x==1)
//		{
//			x=x-1;
//			printf("\n%d",x);
//		}
//	}
//		
//			+output
//			0	
//(f)
//	#include<stdio.h>
//	main()
//	{
//		char x;
//		while(x=0;x<=225;x++)
//		printf("\n ASCII value %d Character %c", x,x);
//		
//	}
//		+output
//		The Code is erro We only can use" While(condition)"
//
//(g)
//	#include<stdio.h>
//	main()
//	{
//	int x=4,y,z;
//	y=--x;
//	z=x--;
//	printf("\n%d %d %d", x,y,z);	
//	}		
//	+output
//	2 3 3

//	#include<stdio.h>
//	main()	
//{
//	int x=4,y=3,z;
//	z=x-- -y;
//	printf("\n%d %d %d",x,y,z);
//	
//	+output 
//	3 3 1
//	
//	
//}
//#include<stdio.h>
//main()
//{
//	while('a'<'b')
//	printf("\n malyalam is palindrome");
//}
//	+output
//	malyalam is palindrome
//	malyalam is palindrome
//	malyalam is palindrome
//	malyalam is palindrome
//	malyalam is palindrome
//	malyalam is palindrome
//	malyalam is palindrome
//	......................


//#include<stdio.h>
//main()
//{
//	int i=10;
//	while (i=20)
//	printf("\n A computer buff");
//	}
//	output
//	A computer buff
//	A computer buff
//	A computer buff
//	A computer buff
//	A computer buff
//	A computer buff
//	..............	

//#include<stdio.h>
//main()
//{
//	int i;
//	while (i=10)
//	{
//		printf("\n%d", i);
//		i=i+1;
//	}
//}
//	infinite of 10;	
//		
		
//	#include<stdio.h>
//	main()
//	{
//		int  x = 4, y = 0, z ;  
//	while ( x >= 0 )  
//	{   x-- ;   y++ ;   
//	if ( x == y ) continue ;   
//	else    
//	printf ( "\n%d %d", x, y ) ;  
//	} 
//
//	}
//		
//		+output
//		3 1
//		1 3
//		0 4
//		-1 5
//		


 //         }  
//for, break, continue, do-while  
	
//	+output
//	4 0
//	3 1

//[B] What would be the output of the folloeing programs:
//#include<stdio.h>
////(a)
//  main( ) 
//	{  
//	int  i = 0 ;  
//	for ( ; i; ) 
//	printf ( "\nHere is some mail for you" ) ; 
//	}  
//
//	+output
//	Nothing in output


//(b)
//#include<stdio.h>
//main( ) 
//	{  
//	int  i ;  
//	for ( i = 1 ; i <= 5 ; 
//	printf ( "\n%d", i ) ) ;   
//	i++ ; 
//	}  
//+output
//infinite of 1
	
//(c)
//#include<stdio.h>
//main()
//{
//int  i = 1, j = 1 ;  
//	for ( ; ; )  
//	{   
//	if ( i > 5 )    
//	break ;   
//	else    
//	j += i ;   
//	printf ( "\n%d", j ) ;   
//	i += j ;   }
//	
//}
//
//
//Output
//2
//5	

//(d)
//#include<stdio.h>
//	main( ) 
//	{  
//	int  c = 3 ;  
// 	switch ( c )  
//	{   
//	case 'v' :    
//	printf ( "I am in case v \n" ) ;    
//	break ;   
//	case 3 :    
//	printf ( "I am in case 3 \n" ) ;    
//	break ;   
//	case 12 :    
//	printf ( "I am in case 12 \n" ) ;    
//	break ;   
//	default :    
//	printf ( "I am in default \n" ) ;  } 
//	}  
//+ output 
//I am in case 3
		
//(c)	
//#include<stdio.h>
//main()
//
//	
//{  
//	int  k, j = 2 ;  
//	switch ( k = j + 1 )  
//	{   
//	case 0 :    
//	printf ( "\nTailor") ;   
//	case 1 :    printf ( "\nTutor") ;   
//	case 2 :    printf ( "\nTramp") ;   
//	default :    printf ( "\nPure Simple Egghead!" ) ;  
//}  
//}
//		+output
//		Pure simple Egghead


//(d)
//#include<stdio.h>
//main( ) 
//	{  
//	int  i = 2 ;  
//	switch ( i )  
//	{   
//	case 0 :   	printf ( "\nCustomers are dicey" ) ;   
//	case 1 :    printf ( "\nMarkets are pricey" ) ;  
//	case 2 :    printf ( "\nInvestors are moody" ) ;   
//	case 3 :    printf ( "\nAt least employees are good" ) ;   
//	} 
//	}
////		+ Output
//Customers are dicy
//Markets are pricey
//Investors are moody
//At least employees are good
//		Because we don't put the break.

//(e)
//#include<stdio.h>
//main()
//{
//	int  k ;  
//	float j = 2.0 ; 
//	switch ( k = j + 1 )  
//	{   
//	case 3 :    
//	printf ( "\nTrapped" ) ;    
//	break ;   
//	default :    
//	printf ( "\nCaught!" ) ;  
//	} 
//
//} 	
//		+output
//		Trapped
//(f)
//		#include<stdio.h>
//		main( ) 
//	{  
//	int  ch = 'a' + 'b' ;  
//	switch ( ch )  
//	{   
//	case 'a' :   
//	case 'b' :    
//	printf ( "\nYou entered b" ) ;   
//	case 'A' :    
//	printf ( "\na as in ashar" ) ;   
//	case 'b' + 'a' :    
//	printf ( "\nYou entered a and b" ) ;  } 
//	}  
//+ Output
//You entered a and b

//(g)
//#include<stdio.h>
// main( ) 
//	{  
//	int  i = 1 ;   
//	switch ( i - 2 )  
//	{   
//	case -1 :    
//	printf ( "\nFeeding fish" ) ; 
//	case 0 :    
//	printf ( "\nWeeding grass" ) ;   
//	case 1 :    
//	printf ( "\nmending roof" ) ;   
//	default :    
//	printf ( "\nJust to survive" ) ; 
//	}
//	}  
//+ Output
//Feeding fish
//Weeding grass
//mending roof
//Just to survive

//[B] Point out the errors, if any, in the following programs:  		
		
	//(a)
//	#include<stdio.h>
//main( ) 
//	{  
//	int  suite = 1 ;  
//	switch ( suite ) ;  
//	{   
//	case 0 ;    
//	printf ( "\nClub" ) ;   
//	case 1 ;    
//	printf ( "\nDiamond" ) ;  
//	} 
//	}  
//The erro code is we can not use ; inline in switch
//case :
//		

//(b)
//#include<stdio.h>
//main()
//{
//	int  temp ;  
//	scanf ( "%d", &temp ) ;  
//	switch ( temp )  
//	{   
//	case ( temp <= 20 ) :    
//	printf ( "\nOoooooohhhh! Damn cool!" ) ;   
//	case ( temp > 20 && temp <= 30 ) :    
//	printf ( "\nRain rain here again!" ) ;   
//	case ( temp > 30 && temp <= 40 ) :    
//	printf ( "\nWish I am on Everest" ) ;   
//	default :    
//	printf ( "\nGood old nagpur weather" ) ;  
//	} 
//	}  
//
//}
//
//
//The code is error because we can not use expression in case.

//(c) 
//#include<stdio.h>
//main( ) 
//	{  float  a = 3.5 ;  
//	switch ( a ) 
//	{   
//	case 0.5:    
//	printf ( "\nThe art of C" ) ;    
//	break ;   
//	case 1.5 :    
//	printf ( "\nThe spirit of C" ) ;    
//	break ;   
//	case 2.5 :    
//	printf ( "\nSee through C" ) ;    
//	break ;   
//	case 3.5 :    
//	printf ( "\nSimply c" ) ;  
//	}
//	}  
//	
//	The code is error because We can not use thr float in case.

//	(d)
	#include<stdio.h>
	main( ) 
	{  
	int a = 3, 
	b = 4, c ;  
	c = b - a ;  
	switch ( c )  
	{   
	case 1 || 2 :    
	printf ( "God give me an opportunity to change things" ) ;    
	break ;  
  	case a || b :    
	printf ( "God give me an opportunity to run my show" ) ;    
	break ;  
	} 
	}
	
	We can use integer in case
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
