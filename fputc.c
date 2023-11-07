#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
	FILE *fptr;//file pointer
	FILE *fp;
	char ch;
	fptr = fopen("char.txt","w");//creating the file and opened in write mode

	if(fptr == NULL)
	{
		printf("Unable to open the file");
		exit(1);
	}
	else
	{
		printf("Enter the text:\n");//Data to be entered that will store in the char.txt
		while((ch = getchar()) != EOF)//It will take character by character
		{
			fputc(ch, fptr);
			
		}
		
	}
	fclose(fptr);
	

	fp = fopen("char.txt","r");

	if(fp == NULL)
	{
		printf("Unable to open the file");
		exit(1);
	}
	else
	{
		while((ch = fgetc(fp))!=EOF)//reading the data already stored in char.txt
		{
			printf("%c",ch);
		}
	}

	fclose(fp);
	return 0;
}


