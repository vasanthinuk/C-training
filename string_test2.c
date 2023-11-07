#include<stdio.h>
#include<string.h>

int main()
{
	char ch[10];
	printf("Enter name");
	scanf("%s",ch);
	printf("%d",strlen(ch));
	ch[1] = 'a';
	printf("%s",ch);
	
	return 0;
}
		
