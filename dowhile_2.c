#include<stdio.h>

int main()

	{
		int n , i;
		i=2;
		
		printf("gas any num : ");
		scanf("%d",&n);
		
		do  {
			if (i % 2 == 0)
			{
				printf("%d\n",i);		
			}
			i++;
			}while(i<n);
	}