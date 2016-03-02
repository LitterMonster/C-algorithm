#include<stdio.h>
/**
 *一个数如果恰好等于它的因子之和，这个数就称为“完数”。例如6=1＋2＋3.编程 
找出1000以内的所有完数。 
 */
 

 int main(void)
 {
 	int n, count;
 	int i;
 	for (n = 2; n <= 10000; n ++)
 	{
 		int j = n;
 		int num_copy = n;
	 	count = 1;
	 	for (i = 2; i <= j; i++)
		{
			while (j != i)
			{
				if (j % i == 0)
				{
					j /= i;
					count += i;
					//printf("%d\t", i);
				 }
				else
				 	break;
			}
		}
		
		count += j;
		//printf("Count is %d\n", count);
		if (count == num_copy)
		{
			printf("Number is %d\n", num_copy);
		}
	}
		/*
		if (count == num_copy)
		{
			printf("%d\t", num_copy);
		}
	}
	*/
	
 	return 0;
 }
