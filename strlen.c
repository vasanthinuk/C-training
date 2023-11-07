#include<stdio.h>
#include<string.h>
int mystrlen(char*);
int main()
{
	int res = 0;
	char str[25];
	fgets(str, 25, stdin);
	str[strlen(str) -1] = '\0';
	res = mystrlen(str);
	printf("%d", res);
	return 0;

}

int mystrlen(char* temp) 
{
	int count = 0;
	//char*temp = str;
//	while(*temp != '\0') {
	while(*temp++) {
		count++;
	//	temp++;
	}
	return count ;
}
