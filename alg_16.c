#include<stdio.h>
/**
 *���Լ������С������ 
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
 	printf("��Լ��%d\n ������%d\n", gys, gbs);
 	return 0;
 }
