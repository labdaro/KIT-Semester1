#include <stdio.h>
int main()
{ int a,b,res;
	char i
	
	;
	printf("Enter the value a:\n");
	scanf("%d", &a);
	
	printf("enter the value b:\n");
	scanf("%d", &b);
fflush (stdin);
	
	
	printf("Press + for add\n");
	printf("pess - for sub\n");
	printf("press * for Mul\n");
	printf("Press / for Div\n");
	
	printf("Enter your Choice:");
	scanf("%c",&i);
	
	switch(i)
{
	case '+':
	res=a+b;
	printf("the result is %d",res);
	break;
	
	case '-':
	res=a-b;
	printf("the result is %d",res);
	break;
	
	case'*':
		res=a*b;
		printf("The result is %d",res);
		break;
	case'/':
		res=a/b;
		printf("The result is %d", res);
		break;
	default:
		printf("Invalid");
		
	}	
}
