#include<stdio.h>
/*对十个数进行排序(选择排序)*/
int main(void)
{
	int i, j, k;
	int array[10];
	for (i = 0; i < 10; i++)
		scanf("%d", &array[i]);
	for (i = 0; i < 10; i ++)
	{
		for (j = i + 1; j < 10 - 1; j++)
			if (array[j] < array[j + 1])
				k = j;
		if (array[i] > array[k])
		{
			int temp = array[i];
			array[i] = array[k];
			array[k] = temp;
		}
	} 
	for (i = 0; i < 10; i++)
	{
		printf("%d\t", array[i]);
	}
}
