/*
* Name    	:max.c
* Description	: MAximum of two numbers using macros
*/

#include<stdio.h> //header file
#include<stdlib.h>

#include "error.h"

#define MAX(a,b)  ( (a) > (b) ? (a) : (b) ) //Macro creation 

//main function
int main(void)
{
	int x = 5; //declaration of variables
	int y = 8;
	int z;
	z = MAX(x++, y++);//Macro calling
	printf("x = %d, y = %d, z = %d\n", x, y, z); //printing values of x, y, z
	return 0;
}

