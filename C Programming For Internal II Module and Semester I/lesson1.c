
#include <stdio.h>
main()
{
	int a,b,c,e;
	float d;
	
	printf("Enter the score of Math:");
	scanf("%d", &a);
	
	printf("Enter the score of English:");
	scanf("%d", &b);
	
	printf("Enter the score of Physic:");
	scanf("%d", &c);
	e=a+b+c;
	d=e/3;
	
	
	printf("Total scores is: %d", e);
	printf("\nAverage is: %f", d);
	
	
	
	
}
