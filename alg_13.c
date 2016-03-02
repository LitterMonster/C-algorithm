#include<stdio.h>
/**
 *打印水仙花数 
 */
 
 int power(int a) 
 {
 	return a * a * a;
 }
 int main(void)
 {
 	int i; 
 	for (i = 100; i <= 999; i++)
 	{
 		int h, m, l;
 		h = i / 100;
 		m = (i / 10) % 10;
		l = i % 10;
		
		if (i == power(h) + power(m) + power(l)) 
		    printf("%d\t", i);
	 }
 	return 0;
 }
