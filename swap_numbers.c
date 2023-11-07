#include<stdio.h>

void swap_numbers(int * , int * );

int main()
{
	int x;
	int y;
	printf("Enter a number:");
	scanf("%d",&x);
	printf("Enter a number:");
	scanf("%d",&y);
	printf("%p %p\n", x,y);//before swapping the location of variables
	printf("Before swapping of 2 numbers is:%d %d\n", x,y);
	swap_numbers(&x, &y);//location of variables is swapping
	printf("%p %p\n", x,y);
	printf("After swapping of 2 numbers is:%d %d", x,y);
	return 0;
}

void swap_numbers(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	
}


