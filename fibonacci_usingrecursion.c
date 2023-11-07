#include<stdio.h>

int fibonacci(int);

int main()
{
	int num;
	int res;
	printf("Enter a number:");
	scanf("%d", &num);
	res = fibonacci(num);
	printf("The fibonacci value is:%d", res);
	return 0;
}

int fibonacci(int a)
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
		return fibonacci(a-1)+fibonacci(a-2);
	}
}

