#include<stdio.h>

int main()

{
	int x, y  , go;
	
	printf(" eanter valu of x : ");
	
	scanf("%d" , & x);
	
	printf(" eanter valu of y : ");
	
	scanf("%d" , & y);
	
	go = x;
	x=y;
	y=go;
	
	printf(" x = %d " , x);
	
	printf(" y = %d " , y);
}