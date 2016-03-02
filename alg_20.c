#include<stdio.h>

int main(void)
{
	double height = 50;
	double sum;
	int i;
	sum = 100;
	for (i = 2; i <= 10; i++)
	{
		sum += (height * 2);
		height /= 2;
	}
	printf("sum is %lf\n height is %lf", sum, height);
	return 0;
 } 
