#include<stdio.h>
/**
 *��Ŀ����1��2��3��4�����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣� 
1.��������������ڰ�λ��ʮλ����λ�����ֶ���1��2��3��4��������е����к���ȥ 
 */
int main(void)
{
	int i, j, k;
	int count = 0;
	for (i = 1; i < 5; i++)
	{
		for (j = 1; j < 5; j++)
		{
			for (k = 1; k < 5; k++)
			{
				if (i != j && j != k && i != k)
				{
				    printf("%d%d%d\n", i, j, k);
				    count ++;
				}
			}
					
		}
	}
	
	printf("Count is %d\n", count);
}
