#include<stdio.h>

int main(void)
{
	int a;
	char b;
	float c;
	double d;
	long int e;
	short int f;
	unsigned char g;
	long  h;
	printf("The size of int is : %ld\n ", sizeof(a));
	printf("The size of char is : %ld\n ", sizeof(b));
	printf("The size of float is : %ld\n ", sizeof(c));
	printf("The size of double is : %ld\n ", sizeof(d));
	printf("The size of  long int is : %ld\n ", sizeof(e));
	printf("The size of short int is : %ld\n ", sizeof(f));
	printf("The size of unsigned char is : %ld\n ",sizeof(g));
	printf("The size of long is : %ld\n ", sizeof(h));
	return 0;
}
