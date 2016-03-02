#include<stdio.h>

void change(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main(void)
{
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);
	if (x > y)
	    change(&x, &y);
	if (x > z)
	    change(&x, &z);
	if (y > z)
	    change(&y, &z);
	printf("Small to Big: %d %d %d\n", x,  y, z);
	return 0;
}
