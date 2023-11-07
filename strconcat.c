#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *strconcatenation(char *, char *);

int main()
{
	char *str;
	char *str1;

	str = (char*)malloc(20*sizeof(char));
	str1 = (char*)malloc(20*sizeof(char));
	printf("Enter string1:");
	scanf("%s", str);
	printf("Enter string2:");
	scanf("%s", str1);
	printf("The concatenated string is:%s\n", strconcatenation(str,str1));
	free(str);
	free(str1);
	return 0;

}

char *strconcatenation(char *str2, char *str)
{
	char *str1 = str;
	while(*str1!= '\0')
		str1++;
	while(*str2!='\0')
	{
		*str1 = *str2;
		str1++;
		str2++;
	}
	
	*str1 = '\0';
	return str;
}
