#include<stdio.h>
#include<math.h>
/*求100以内的素数*/
int is_prime(int num)
{
	int i;
	for (i = 2; i <= sqrt(num + 1); i++)
	{
		if (num % i == 0)
			return 0;
	}
	return 1;
}
int main(void)
{
	int i;
	for (i = 1; i <= 100; i++)	
	{
		if (is_prime(i) == 1)
			printf("%d\t", i);
	}
}
