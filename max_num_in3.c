#include <stdio.h>

int main()
{
	int a,b,c;
	
	printf("valu of a : ");
	scanf("%d" ,&a);
	
		printf("valu of b : ");
	scanf("%d" ,&b);
	
		printf("valu of c : ");
	scanf("%d" ,&c);
	
	if(a>b)	{
				if(a>c) {
							printf("a is max");
			  			}
				else
						{
							printf("c is MAX");
						}
		
			}
	else {
				if(b>c) {
							printf("b is max");
						}
				else
						{
							printf("c is max");
						}
		 }
}
