#include <stdio.h>
main()
{
	int i,j,a,res;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=10;j++)
		{	
			res=i*j;
			printf("\n The mul : %d",res);	
		}
	
	}
}
