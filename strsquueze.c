#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *strsqueeze(char *str);

int main()
{
	char *str = NULL;
	str = (char*)malloc(sizeof(char*));
	printf("Enter a string:");
	fgets(str,100,stdin);
	str[strlen(str)-1] = '\0';
	printf("The squeezed string is:%s", strsqueeze(str));
	return 0;
}

char *strsqueeze(char *str)
{
	char *ptr1 = str;
	char *ptr2 = str;
	while(*ptr1)
	{
		*ptr2 = *ptr1;
		ptr1++;
		if(*ptr2 != *ptr1 || *ptr1 == '\0')
			ptr2++;
	}
	*ptr2 = '\0';
	return str;
}

