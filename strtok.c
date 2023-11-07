#include<stdio.h>
#include<string.h>

int main()
{
	
	char str[50] = "Hi,How, are, you";
	char ch[] = "Hi";
	int i,j;
	for(i = 0; str[i]!='\0';i++)
	{
		
		if(str[i] == ch[i])
		{
			str[i] = '\0';
		}
		
		
	}
	
	for(j = 0; j < i; j++)
	{
		if(str[j] != '\0')
			printf("%c",str[j]);
		else
			printf("\n");
	
	}
	return 0;
}
