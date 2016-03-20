#include<stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	int i, j;
	int data[n];
	
	for (i = 0; i < n; i++)
		scanf("%d", &data[i]);
		
	int counts = 0;
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (data[i] + data[j] == 0)
				counts++;
		}
	}
	
	printf("%d", counts);
	return 0;
}
