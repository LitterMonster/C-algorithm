#include<stdio.h>
/**�õݹ�ķ�����5!*/
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
