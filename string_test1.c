#include<stdio.h>

int strlength(char *a);

int main()
{
	char a[20];
	printf("Enter the string:");
	scanf("%s",a);
	printf("%d",strlength(a));
	return 0;
}

int strlength(char *a)
{
	int count = 0;
	while( *a++ != '\0'){
	count++;
	}
	
		//count++;
		//a++;
	return count;
}

