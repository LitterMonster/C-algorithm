#include<stdio.h>
#include<math.h>
/**
 *��s=a+aa+aaa+aaaa+aa...a��ֵ������a��һ�����֡�����2+22+222+2222+22222(��ʱ 
����5�������)������������м��̿��ơ� 
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
