#include<stdio.h>
#include<math.h>
/**
 *
 */
 
 int main(void)
 {
 	long int i, x, y;
 	for (i = 1; i < 100000; i++)
 	{
 		x = sqrt(i + 100);
 		y = sqrt(i + 268);
 		if (((x * x) == (i + 100)) && ((y * y )== (i + 268)))
 		    printf("Find %ld\n", i);
	 }
 	return 0;
 }
