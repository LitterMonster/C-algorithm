#include<stdio.h>
int main(void)
{
	int n;
	scanf("%d", &n);
	int count = 0;
	while(n != 0)
	{
		printf("%d", n % 10);
		n /= 10;
		count++;
	}
	printf(" Count is %d\n", count);
	return 0;
}
