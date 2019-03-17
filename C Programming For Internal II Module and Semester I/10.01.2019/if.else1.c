#include <stdio.h>
main()
{
	int num;
	printf("Enter the value:");
	scanf("%d", &num);
	
	if(num%2==0)
	{
		printf("The given the number is even");
	}
	else
	{
		printf("The given number is odd");
	}
}
