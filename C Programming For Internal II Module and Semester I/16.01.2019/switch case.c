#include <stdio.h>
int main()
{
	char chc;
	puts("Menu");
	puts("1.Create Directery");
	puts("2.school");
	puts("3.battambang");
	puts("4.Phnom penh");
	chc=getchar();
	fflush(stdin);
	switch (chc)
{
	case '1':
		puts("your choice is 1");
		break;
	case '2':
	puts("your choice is 2");
	break;
	case '3':
	puts("your choice is 3");
	break;
	case '4':
	puts("your choice is 4");
	break;
	default:
	puts("Invalid the choice");
	}	
	printf("Good bye");
}
