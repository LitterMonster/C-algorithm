#include<stdio.h>
#include<math.h>
/*���ڳ���Ϊ5λ��һ��01����ÿһλ��������0��1��һ����32�ֿ��ܡ�*/
int getBinary(int num)
{
    int i;
    int sum = 0;
    int count = 0;
	while(num != 0)	
	{
		sum += (num % 2) * pow(10, count++);
		num /= 2;
	}
	return sum;
}
int main(void)
{
	int i;
	for (i = 0; i <= 31; i++)
		printf("%05d\n", getBinary(i));
}

