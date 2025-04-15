# include  <stdio.h>

	int main ()
	

		{ 
			int maths, sience, english , total;
			
			float per;
			
			printf ("enter marks of maths : ");
			scanf ("%d" , &maths);

			printf ("enter marks of science : ");
			scanf ("%d", &sience);
			
			printf ("enter marks of english : ");
			scanf ("%d", &english);	
			
			total = maths+sience+english;
			
			printf ("total marks : %d " , total);
			
			per = ((float)total*100)/300 ;
			
			printf ("\nper is :%f " , per);
		

		}