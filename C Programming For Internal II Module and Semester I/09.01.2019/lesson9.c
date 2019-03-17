#include <stdio.h>
main()
{
	char name[21], add[31];
	gets(name); /*input the string*/
	puts("Your name is:"); /*To display when output*/
	puts(name); /*put string into stdout*/
	fflush(stdin);
	gets(add);	/*input the string*/
	puts("Your address is:"); /*to display when we output*/
	fflush(stdin);	
	puts(add);	/* put string into the string*/
}
