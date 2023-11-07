#include<stdio.h>
#include<string.h>
int main()
{
	char a[10];
	printf("Enter string:");
	//scanf("%s",a);
	fgets(a,10,stdin);
	 a[strlen(a) - 1] = '\0';
	printf("The string is:%s\n",a);
	printf("length of string:%d",strlen(a));
	return 0;
}

