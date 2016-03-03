#include<stdio.h>
/*Çó1!+2!+...+20!*/
int jiechen(int num)
{
	int result = 1, i;
	for (i = 1; i <= num; i++)
	{
		result *= i;
	}
	return result;
}

int main(void)
{
	int i;
	int sum = 0;
	for (i = 1; i <= 20; i++)
	{
		sum += jiechen(i);
	 } 
	printf("Sum is %d\n", sum);
	return 0;
}
