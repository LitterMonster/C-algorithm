#include<stdio.h>
/**
 *һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ��������������6=1��2��3.��� 
�ҳ�1000���ڵ����������� 
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
