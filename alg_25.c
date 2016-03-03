#include<stdio.h>
int main(void)
{
	int n, t, number = 20;
	float a = 2, b = 1, s = 0;
	for (n = 1; n <= number; n++)
	{
		s += a/b;
		a = a + b;
		b = t;
	}
	printf("%f\n", s);
	return 0;
}
