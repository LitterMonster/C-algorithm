#include<stdio.h>
int main(void)
{
	int num;
	scanf("%d", &num);
	int data[num], key[num];
	int i, j, count = 0;
	for (i = 0; i < num; i++)
		scanf("%d", &data[i]);
	
	key[0] = data[0];
	count = 1;
	int flag = 1;
	for (i = 1; i < num; i++)
	{
		int flag = 1;
		int temp_key = data[i];
		int p;
		for (p = 0; p < count; p++)
		{
			if (key[p] == temp_key)
			{
				flag = -1;
				break;	
			}
		}
		if (flag == 1)
		{
			key[count] = temp_key;
			count++;
		}		
	}
	
	for (i = 0; i < count; i++)
	{
		for (j = i + 1; j < count; j++)
		{
			if (key[i] <= key[j])
			{
				int temp = key[i];
				key[i] = key[j];
				key[j] = temp;
			}
		}
	}
	
	int value[count];
	for (i = 0; i < count; i++)
	{
		int counts = 0;
		for (j = 0; j < num; j++)
		{
			if (data[j] == key[i])
				counts++;
		}
		value[i] = counts;
	}
	//sort
	for (i = 0; i < count; i++)
	{
		for (j = i + 1; j < count; j++)
		{
			if (value[i] <= value[j])
			{
				int temp = value[i];
				value[i] = value[j];
				value[j] = temp;
				
				temp = key[i];
				key[i] = key[j];
				key[j] = temp;
			}
		}
	}
	
	for (i = 0; i < count; i++)
		printf("%d %d\n", key[i], value[i]);
	return 0;
}
