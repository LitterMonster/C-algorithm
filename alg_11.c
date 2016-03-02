#include<stdio.h>
/**
 *计算斐波那契数列 
 */
int generate(int i)
{
	if (i == 1 || i == 2)
	    return 1;
	else
	    return generate(i - 1) + generate(i - 2);
}

int main(void)
{
    int month;
	scanf("%d", &month);
	int i, count = 0;
	for (i = 1; i <= month; i++)
	{
		printf("Month %d %d\n", i, generate(i));
	}
}
