#include<stdio.h>
#include<math.h>
/*对于长度为5位的一个01串，每一位都可能是0或1，一共有32种可能。*/
int getBinary(int num)
{
    int i;
    int sum = 0;
    int count = 0;
	while(num != 0)	
	{
		sum += (num % 2) * pow(10, count++);
		num /= 2;
	}
	return sum;
}
int main(void)
{
	int i;
	for (i = 0; i <= 31; i++)
		printf("%05d\n", getBinary(i));
}

