#include<stdio.h>

int factorial(int);

int main()
{
	int num;
	int res;
	printf("Enter a number:");
	scanf("%d", &num);
	res = factorial(num);
	printf("The fibonacci value is:%d", res);
	return 0;
}

int factorial(int a)
{
	if( a == 0)
	{
		return 0;
	}
	else if(a == 1)
	{
		return 1;
	}
	else
	{
		return  a*factorial(a-1);
	}
}

