#include <stdio.h>

int main()

{	
	int celsius; 
	float  fahrenheit;
	printf("enter val of celsius  : ");
	
	scanf ("%d" , & celsius  );
	
	fahrenheit = (float)celsius *33.8;
	
	printf ("this is valu of fahrenheit : %f", fahrenheit);
	
}