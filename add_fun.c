#include<stdio.h>

void add(int *,int *, int *);

int main()
{
	int a = 10;
	int b = 20;
	int c = 0;
	add(&a, &b, &c);
	printf("%d", c);
	return 0;
}

void add(int *a, int *b, int *c)
{
	*c = *a + *b;
}
