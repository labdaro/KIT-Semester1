//#include<stdio.h>
//main()
//{
//	int i,j,a[3][3],b[3][3],c[3][3];
//	printf("Enter the matrix A:\n");
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			
//			scanf(" %d",&a[i][j]);
//		}
//		printf("\n");
//	}
//	printf("Enter the matrix B:\n");
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			scanf(" %d", &b[i][j]);
//		
//		}
//		
//	}
//	
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			c[i][j]=a[i][j]-b[i][j];
//		}
//	}
//	printf("The matrix additional is:\n");
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			printf("   %d",c[i][j]);
//			
//		}
//		printf("\n");
//	}
//	
//	
//}

#include<stdio.h>
main()
{
	int i,j,a[3][3],b[3][3],c[3][3];
	printf("Enter the matrix A:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("Enter number of matric B:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
		printf("\n");
		
	}
	
	printf("The Matrix Addition is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\n",c[i][j]);
			
		}
	
	}
	
}





























