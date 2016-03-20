#include<stdio.h>
int main(void)
{
	int n, m;
	scanf("%d %d", &n, &m);
	int data[n][m], data2[n][m], data3[n][m];
	int i, j;
	i = j = 0;
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
		{
			scanf("%d", &data[i][j]);
			data2[i][j] = data[i][j];
			data3[i][j] = data[i][j];
		}
			
	//Erase linear data
	for (i = 0; i < n; i++)
	{
		j = 0;
		int next = j + 1;
		
		while (next < m)
		{
			int times = 1;
			while (data[i][j] == data[i][next])
			{
				next++;
				times++;
			}
			if (times >= 3)
			{
				int p = j, q = next;
				int t;
				for (t = p; t < next; t++)
					data[i][t] = 0;
			}
			j = next;
			next += 1;
		}
	}
	
	//Erase vertical data
	for (j = 0; j < m; j++)
	{
		i = 0;
		int next = i + 1;
		
		while (next < n)
		{
			int times = 1;
			while (data2[i][j] == data2[next][j])
			{
				next++;
				times++;
			}
			if (times >= 3)
			{
				int p = i, q = next;
				int t;
				for (t = p; t < next; t++)
					data2[t][j] = 0;
			}
			i = next;
			next += 1;
		}
	}
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (data[i][j] != data3[i][j])
				data3[i][j] = 0;
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (data2[i][j] != data3[i][j])
				data3[i][j] = 0;
		}
	}
	//Output
	printf("\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
			printf("%d ", data3[i][j]);
		printf("\n");
	}
	return 0;
}
