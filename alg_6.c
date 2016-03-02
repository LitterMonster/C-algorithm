#include<stdio.h>
int main(void)
{
	int i;
	for (i = 1; i <= 256; i++)
	{
		printf("%4c\t", i);
	    if (i % 10 == 0)
	        printf("\n");
	}
	return 0;
}
