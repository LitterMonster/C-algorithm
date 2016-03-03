#include<stdio.h>
/**
 *通过指针返回整形数组的值 
  */
int *fill_array(int *a)
{
	int i;
	for (i  = 0; i < 5; i++)
	{
		*(a + i) = i;
	}
	return a;
}

int main(void)
{
	int a[5];
	int i;
	int *p = fill_array(a);
	for (i = 0; i < 5; i++)
	{
		printf("%d\n", *(p++));
	}
}
