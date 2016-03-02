#include<stdio.h>
/**
 *打印国际象棋棋盘 
 */
 int main(void)
 {
 	int i, j;
 	for (i = 1; i <= 8; i++)
 	{
 		for (j = 1; j<= 8; j++)
 		{
 			if (i % 2 == 1)
 			{
 				if (j % 2 == 0)
 				    printf("*");
 				else
 				    printf(" ");
			 }
			 else
			 {
			 	if (j % 2 == 1)
			 	 printf("*");
			 	else
			 	    printf(" ");
			 }
		 }
		 printf("\n");
	 }
 	return 0;
 }
