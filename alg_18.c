#include<stdio.h>
#include<math.h>
/**
 *求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。例如2+22+222+2222+22222(此时 
共有5个数相加)，几个数相加有键盘控制。 
 */
 int main(void)
 {
 	int num, times;
 	scanf("%d %d", &times, &num);
 	int i, sum = 0;
	 for (i = 1; i <= times; i++)
	 {
	 	sum += (pow(10, i) - 1 ) * num / 9;
	 } 	
	 
	 printf("Sum is %d\n", sum);
 	return 0;
  } 
