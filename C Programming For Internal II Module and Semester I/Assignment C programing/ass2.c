 	/* #include<stdio.h>

main( ) 
	{  
	int   a = 300, b, c ;   (conditional false so it execute b)
	if ( a >= 400 )   b = 300 ;   
	c = 200 ;   printf ( "\n%d %d", b, c ) ; 
	}  */
/*#include<stdio.h>
main( ) 
	{  int   a = 500, b, c ;  
	if ( a >= 400 ) (conditional true so it execute up to down)
	b = 300 ;   
	c = 200 ;   
	printf ( "\n%d %d", b, c ) ; 
	}  */
/*#include<stdio.h>
	main( ) 
	{  
	int   x = 10, y = 20 ;  
	if ( x == y ) ;   (x==y false it will end and go down execute printf)
	printf ( "\n%d %d", x, y ) ; 
	}  */
/*	#include<stdio.h>
	main( ) 
	{  
	int   x = 3, 
	y = 5 ;  
	if ( x == 3 )   (conditinal true execute printf and end)
	printf ( "\n%d", x ) ; (check else execute printf) 
	else ;   
	printf ( "\n%d", y ) ; 
	}  */
/*	#include<stdio.h>
	main( ) 
	{  
	int   x = 3 ;  
	float   y = 3.0 ;  
 	if ( x == y )   			(con true and go down execute the printf )
	printf ( "\nx and y are equal" ) ;  (the program will end)
	else   
	printf ( "\nx and y are not equal" ) ; }*/
/*	#include<stdio.h>
main( ) 
	{  
	int   x = 3, y, z ;  
	y = x = 10 ;   (will execute, true)
	z = x < 10 ;  (10<10 false=0)
	printf ( "\nx = %d y = %d z = %d", x, y, z ) ; 

}*/

/*#include<stdio.h>
main( ) 					( execute the right to left)
	{  
	int  k = 35 ;  
	printf ( "\n%d %d %d", k == 35, k = 50, k > 40 ) ; 
	}  */
/* 	#include<stdio.h>
	 main( ) 
	{  int i = 65 ;  
	char j = 'A' ;  (true ASCII value)
	if ( i == j )   
	printf ( "C is WOW" ) ;  
	else   
	printf( "C is a headache" ) ; 
	}  */

/* 	#include<stdio.h>
main( ) 
	{  
	int  x = 15 ;  
	printf ( "\n%d %d %d", x != 15, x = 20, x < 30 ) ; 	(execute from the right to left)
	}  */

//B) Point out the errors ,if any, in the following program:

/**#include<stdio.h>
main( ) 
	{  float   a = 12.25, b = 12.52 ;  
	if ( a = b )   						(a==b)
	printf ( "\na and b are equal" ) ; 
	}  */
/*#include<stdio.h>
 main( ) 
	{  
	int   j = 10, k = 12 ;  
	if ( k >= j ) 	 
	{  
	
	{    
	k = j ;    
	j = k ;   
	}  
	} 
	}  */
/*#include<stdio.h>
main( ) 
	{  

	if ( 'X' < 'x' )   (true becaude computer know ASCCII value )
	printf ( "\nascii value of X is smaller than that of x" ) ; 
	}  */


/*#include<stdio.h>
 main( ) 
	{  int  x = 10 ;  
	if ( x >= 2 ) 
	then   					(no then delete then)
	printf ( "\n%d", x ) ; 
	}  */
/*	#include<stdio.h>
 main( ) 
	{  int  x = 10 ;  
	if x >= 2 			(no parathese)  
	printf ( "\n%d", x ) ; 
	}  */
/*#include <stdio.h>
main( ) 
	{  int  x = 10, y = 15 ;  
if ( x % 2 = y % 3 )					(we can't use = we use ==)
	printf ( "\nCarpathians" ) ; 
	}  */
/*	#include<stdio.h>
main( ) 
	{  
	int x = 30 , y = 40 ;  
	if ( x == y )   
	printf( "x is equal to y" ) ;  	(elseif is wrong we need space else if)
	elseif ( x > y )    
	printf( "x is greater than y" ) ;  
	elseif ( x < y )   
	printf( "x is less than y" ) ; 
	}  */
/*#include<stdio.h>
main( ) 
{  int  x = 10 ;  
	if ( x >= 2 ) then   		(no then)
	printf ( "\n%d", x ) ; 
	}  */
/*#include<stdio.h>
main( ) 
	{  
	int a, b ;  
	scanf ( "%d %d",a, b ) ;  
	if ( a > b ) ;   
	printf ( "This is a game" ) ;  
	else   
	printf ( "You have to play it" ) ; 
	}   
*/
//	[C] What would be the output of the following programing



/*#include <stdio.h>
main( ) 
	{
	int   i = 4, z = 12 ;  
	if ( i = 5 || z >50)   
	printf ( "\nDean of students affairs" ) ;  
	else   
	printf ( "\nDosa" ) ; 
	}  
	+ output
	Dean of students affairs
	because the conditional is true.*/
	
/*#include<stdio.h>
main()
{  
	int   i = 4, z = 12 ;  
	if ( i = 5 && z > 5 )   
	printf ( "\nC Programming" ) ;  
	else   printf ( "\nWish C was Easy !" ) ; 
	}  
+ output
C programming

because the conditional is true so it will execute the printf below
i=5 it just assigned*/
/*#include<stdio.h>
main( ) 
	{  
	int   i = 4, 
	j = -1, k = 0, w, x, y, z ;  

	w = i || j || k ;  
	x = i && j && k ;  
	y = i || j && k ;  
	z = i && j || k ;  
	printf ( "\nw = %d x = %d y = %d z = %d", w, x, y, z ) ; 
	}  */
	
	
/*	#include<stdio.h>
	
	main( ) 
	{  
	int   i = 4, j = -1, k = 0, y, z ;  
	y = i + 5 && j + 1 || k + 2 ;  
	z = i + 5 || j + 1 && k + 2 ;  
	printf ( "\ny = %d z = %d", y, z ) ; 
	}  */


/*	#include<stdio.h>
	main( ) 
	{  
	int   i = -3, j = 3 ;  
	if ( !i + !j * 1 )   
	printf ( "\nMassaro" ) ;  
	else   
	printf ( "\nBennarivo" ) ; 
	}  
	
	+output
	Bennarivo
	Because the conditional is false .*/
	
/*	#include<stdio.h>
	main( ) 
	{  
	int  a = 40 ;  
	if ( a > 40 && a < 45 )   
	printf ( "a is greater than 40 and less than 45" ) ;
	else   printf ( "%d", a ) ; 
	}  
+output
40
Because the conditional is false 
&& it means that true it will be true.*/


/*#include<stdio.h>
main( ) 
	{  
	int   p = 8, q = 20 ;  
	if ( p == 5 && q > 5 )   
	printf ( "\nWhy not C" ) ;  
	else   
	printf ( "\nDefinitely C !" ) ; 
	}  
	+output
	Definitely C! 
	Because the conditional is false.*/
	
/*#include<stdio.h>
main( ) 
	{  
	int i = -1, j = 1, k ,l ;  
	k = i && j ;  l = i || j ;  
	printf ( "%d %d", i, j ) ; 
	}  */
	
/*#include<stdio.h>
main( ) 
	{  
	int x = 20 , y = 40 , 	z = 45 ;  
	if ( x > y && x > z )   
	printf( "x is big" ) ;  
	else if ( y > x && y > z )    
	printf( "y is big" ) ;  
	else if ( z > x && z > y )    
	printf( "z is big" ) ; 
	}  
+output 
z is big
Because else if z is big is true
so it will execute the printf below it.*/

//#include<stdio.h>
//main( ) 
//	{  
//	int i = -1, j = 1, k ,l ;  
//	k = !i && j ;  l = !i  ||  j ;  
//	printf ( "%d %d", i, j ) ;
//	}   
//
//Output 
//-1 1

//#include<stdio.h>
//main( ) 
//	{  
//	int   j = 4, k ;  
//	k = !5 && j ;  
//	printf ( "\nk = %d", k ) ; 	
//	}  
//+output
//k=0

//[D] Point out the errors, if any, in the following programs:  
//(a) /* This program /* is an example of /* using Logical operators */ 

//#include<stdio.h>
//	main( ) 
//	{  
//	int   i = 2, j = 5 ;  
//	if ( i == 2 && j == 5 )   
//	printf ( "\nSatisfied at last" ) ; 
//	}  
//+output
//Satisfied at last
//because i== && j==5 is true so it will execute the printf
//

//#include<stdio.h>
//main( ) 
//	{  
//	int   code, flag ;
// 
//	if ( code == 1 &flag == 0 )   
//	printf ( "\nThe eagle has landed" ) ; 
//}
//+output
//Nothing
//we didn't assign to value code and flag 
//how can we compare it

//#include<stdio.h>
//	main()
//	{  
//	char   spy = 'a', password = 'z' ;  
//	if ( spy == 'a' or password == 'z' )   
//	printf ( "\nAll the birds are safe in the nest" ) ; 
//	}  
//	The Code is erro we can't run to see the output anywhere.
//	Because we can not use OR. We can use || instead of OR.

//#include<stdio.h>
//main()
//{ 
// 	int   i = 10, j = 20 ;  
//	if ( i = 5 ) && if ( j = 10 )   
//	printf ( "\nHave a nice day" ) ; 
//	}  

//The code is error We can not run to see the output anywhere.
//#include<stdio.h>
//main()
//{
//	  
//	int  x = 10 , y = 20;  
//	if ( x >= 2 and y <=50 )   
//	printf ( "\n%d", x ) ; 
//
//}
//The Code is error> we can not use and. we use && instead of and



//#include<stdio.h>
//main()
//{  int   a, b ;  
//	if ( a == 1 & b == 0 )   
//	printf ( "\nGod is Great" ) ; 
//}  
// No output
// BecauseWe do not assign the value of a and b
//

//#include<stdio.h>
//main()
//{  int x = 2;  
//	if ( x == 2 && x != 0 ) ; 
//	{   
//	printf ( "\nHi" ) ;   
//	printf( "\nHello" ) ;  
//	}  
//	else   
//	printf( "Bye" ) ; 
//}  
//
//The code is Erro we can't use ";" in if and 
//we keep else stay alone.
//If we want to see output we can delete the ; inline if.
//
//

//#include<stdio.h>
//main()
//{  int   i = 10, j = 10 ;  
//	if ( i && j == 10)   
//	printf ( "\nHave a nice day" ) ;           
//	}  
//+output
//Have a nice day
//Because conditional is true so it execute up to down 
//
//


//[E] What would be the output of the following programs:  
//(a)
//#include<stdio.h>
//main ()
//{
//	int   i = -4, j, num ;  
//	j = ( num < 0 ? 0 : num * num ) ;  
//	printf ( "\n%d", j ) ; 
//
//}
//+output 
//1 ?????????????????????????????????????????????????
//

//#include<stdio.h>
//main( ) 
//	{  int   k, 
//	num = 30 ;  
//	k = ( num > 5 ? ( num <= 10 ? 100 : 200 ) : 500 ) ;  
//	printf ( "\n%d", num ) ; 
//	}  
//Output
//30	????????????????????????????????????????????????
//
























