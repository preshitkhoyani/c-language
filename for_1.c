#include<stdio.h>

int main()

	{
		int n , a = 0, b = 1 , next;
		
		printf("enter any num : ");
		scanf("%d",&n);
		
		printf("Output :\n ");
		
		for (int i = 0 ; i < n ; i++)
		{printf("%d", a);
		
		if (i < n - 1){
							printf(",   ");
					  }
		next = a + b;
		a=b;
		b=next;4
		}
	}