#include<stdio.h>
int main(void)
{
    int m, n;
	scanf("%d %d", &n, &m);
	int data[n][m];
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &data[i][j]);
		}
	}
	
	for (i = m - 1; i >= 0; i--)
	{
		for (j = 0; j < n; j++)
			printf("%d ", data[j][i]);
		printf("\n");
	}

	return 0;
}
