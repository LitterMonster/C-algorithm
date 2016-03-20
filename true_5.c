#include<stdio.h>
int main(void)
{
	int num;
	scanf("%d", &num);
	int i, j;
	int data[num];
	for (i = 0; i < num; i++)
	{
		scanf("%d", &data[i]);
	}
	for (i = 0; i < num; i++)
	{
		int count = 0;
		for (j = 0; j <= i; j++)
		{
			if (data[j] == data[i])
			{
				count++;
			}
		}
		printf("%d ", count);
	}
	return 0;
}
