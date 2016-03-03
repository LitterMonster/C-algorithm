#include<stdio.h>
/*对十个数进行排序(冒泡排序)*/
int main(void)
{
	int i, j, k;
	int array[10];
	for (i = 0; i < 10; i++)
		scanf("%d", &array[i]);
	for (i = 0; i < 10 - 1; i ++)
	{
		for (j = 0; j < 10 - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	} 
	for (i = 0; i < 10; i++)
	{
		printf("%d\t", array[i]);
	}
}
