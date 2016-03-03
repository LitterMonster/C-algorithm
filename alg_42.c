#include<stdio.h>

int main(void)
{
	int num;
	scanf("%d", &num);
	int i, j, array[num];
	for (i = 0; i < num; i++)
		scanf("%d", &array[i]);
	for (i = 0; i < num - 1; i++)
		for (j = 0; j < num - 1; j++)
			if (array[j] > array[j + 1])
			{
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
	for (i = 0; i < num; i++)
		printf("%d ", array[i]);
}

