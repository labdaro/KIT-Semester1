#include <stdio.h>
/*function to accept and display a character*/
main()
{ char a;
	a=getc (stdin); /*accept a character */
	fflush (stdin);/*clear the stdin buffer*/
	putc (a, stdout);  /*display a character*/
	     
	
}
