#include<stdio.h>

int swap(int*, int*);

int main()
{
	int a;
	int b;
	printf("Enter a and b values: ");
	scanf("%d %d", &a, &b);
	printf("Befrore swapping of two numbers is: %d and %d\n ", a, b);
	swap(&a,&b);
	printf("After swapping of two numbers is: %d and %d\n", a, b);
	return 0;
}

int swap(int* num1, int* num2)
{
	//int temp;
	*num1 = *num1 + *num2;
	*num2 = *num1 - *num2;
	*num1 = *num1 - *num2;
	printf("After swapping of two numbers is :%d and %d\n", *num1, *num2);
}

