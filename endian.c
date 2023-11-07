#include<stdio.h>

int main()
{
	int a;
	char *b;
	a = 1;
	b = (char*) & a;
	if(*b == 1)
	{
		printf("little- endian");
	}
	else if(*b == 0)
	{
		printf("big-endian");
	}
	return 0;
}
