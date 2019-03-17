#include<stdio.h>

main()
{
	int num1, num2, num3;
	printf("Enter the value of num1: ");
	scanf("%d",&num1);
	printf("Enter the value of num2: ");
	scanf("%d",&num2);
	printf("Enter the value of num3: ");
	scanf("%d",&num3);
	if (num1 == num2 && num2==num3)
	{
		printf("All the value are equal!!! ");
	}
	else
	{
		if(num1>=num2 && num1>num3)
			printf("%d is the greatest",num1);
		if(num2>=num3 && num2>num1)
			printf("%d is the greatest",num2);
		if(num3>=num1 && num3>num2)
			printf("%d is the greatest",num3);
		else{
			if(num1==num2 && num1>num3)
				printf("%d is the greatest",num1);
			if(num2==num3 && num2>num1)
				printf("%d is the greatest",num2);
			if(num3==num1 && num3>num2)
				printf("%d is the greatest",num3);
		} 
	}
}
