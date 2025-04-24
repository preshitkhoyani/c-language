#include<stdio.h>

int main ()

{
	int i, a;
	
	printf("Enter any num : ");
	scanf("%d",&a);
	
	i = 1;
	
	while(i<=a)
	{
		printf("%d\n",i);
		i++;
	}
}