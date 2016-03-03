#include<stdio.h>
/**用递归的方法求5!*/
int recursion(int i)
{
	if (i == 1)
		return 1;
	else
		return i * recursion(i - 1);
}
int main(void)
{
	printf("%d\n", recursion(10));
	return 0;
}
