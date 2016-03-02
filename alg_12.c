#include<stdio.h>
#include<math.h>
/**
 *计算101-200之间的素数 
 */ 
 
int main(void)
{
	int count = 0;
	int i, temp, flag = 0;
	for (i = 101; i <= 200; i++)
	{
		for (temp = 2; temp <= sqrt(i + 1); temp++)
			if ( i % temp == 0)
			{
				flag = 1;
			    break;
			}
		if (flag == 0)
		{
			count++;
			printf("%d\t", i);
			if (count % 10 == 0)
			    printf("\n");
		}
		flag = 0;
	}
	
	printf("Count is %d\n", count);

}
