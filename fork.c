#include<stdio.h>
#include<unistd.h>
int main()
{
printf("Before fork\n");
fork();
printf("after fork\n");
}
