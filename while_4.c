#include<stdio.h>

int main ()

{
	int i, a;
	
	printf("Enter any num : ");
	scanf("%d",&a);
	
	i = 1;
	
	while(a>i)
	{
		printf("%d\n",a);
		a++;
	}
}