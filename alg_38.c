#include<stdio.h>
int isCircul(int num)
{
	if (num >= 100000)
	{
		if (num / 100000 == num % 10 && 
		num /10000 % 10== num / 10 % 10 && num / 1000 % 10== num / 100 % 10)
			return 1;
	}
	else 
	{
		if (num / 10000 == num % 10 && num / 1000 % 10== num / 10 % 10)
		    return 1;
	}
	return 0;
}
int main(void)
{
	int i, sum, num;
	scanf("%d", &num);
	for (i = 10000; i<= 999999; i++)
	{
		sum = 0;
		int temp = i;
		while(temp != 0)
		{
			sum += (temp %10);
			temp /= 10;
		}
		if (num == sum && isCircul(i))
			printf("%d\t", i);
	}
}
