#include <stdio.h>
main()
{
	char inp;
	puts("Enter Grade code");
	inp=getchar();
	fflush(stdin);
	if (inp=='a')
	
		puts ("HRA percentage is 45");
	else if (inp=='b')
		puts("HRA percentage is 40");
	else if (inp=='c')
		puts("HRA percentage is 30");
	else if (inp=='d')
		puts ("HRA percentage is 25");
	else 
		puts("Invalid Grade code");
}
