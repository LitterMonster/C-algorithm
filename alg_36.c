#include<stdio.h>
int main(void)
{
	int n, find;
	scanf("%d", &n);
	int array[n];
	int i, flag = 1;
	for (i = 0; i < n; i++)
		scanf("%d", &array[i]);
	scanf("%d", &find);
	for (i = 0; i < n; i++)
		if (array[i] == find)
			{
				flag = 0;
				printf("%d\n", i + 1);
				break;
			}
	if (flag == 1)
		printf("-1\n");
}
