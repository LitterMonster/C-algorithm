#include<stdio.h>
/**
 *��һ���������ֽ������� 
 */
 int main(void)
 {
 	int num, for_num;
 	int i, count;
 	scanf("%d", &num);
 	for_num = num;
 	count = 1;
 	
 	while(1)
 	{
 		for (i = 2; i <= num; i++)
 		{
 			if (num % i == 0)
 			{
 				num /= i;
 				count *= i;
 				printf("%d *", i);
 				break;
			 }
		 }
		 if (count == for_num)
		 {
		 	break;
		 }
	 }
 	return 0;
 }
