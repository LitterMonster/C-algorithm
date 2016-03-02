#include<stdio.h>
/**
 *最大公约数和最小公倍数 
 */
 
 int gongyueshu(int m, int n) 
 {
 	int temp;
 	int min = (m < n) ? m : n;
 	for (temp = min; temp >= 1; temp--)
 	{
 		if (m % temp == 0 && n % temp == 0)
 			return temp;
	 }
 }
 
 int main(void)
 {
 	int m, n;
 	scanf("%d %d", &m, &n);
 	int gys = gongyueshu(m, n);
 	int gbs = m * n / gys;
 	printf("公约数%d\n 公倍数%d\n", gys, gbs);
 	return 0;
 }
