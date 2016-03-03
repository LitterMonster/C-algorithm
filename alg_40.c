#include<stdio.h>
#include<math.h>
#include<string.h>
int hexToDecimal(char *num)
{
	int len = strlen(num);
	int i, sum = 0;
	for (i = 0; i < len; i++)
	{
		if (num[i] >= 'A' && num[i] <= 'F')
			sum = sum + (10 + (num[i] - 'A')) * pow(16, len - i - 1);
		else
			sum = sum + (num[i] - '0') * pow(16, len - i - 1);
	}
	return sum;
}

int decimalToOctal(int num)
{
	int result = 0;
	int count = 0;
	while (num != 0)
	{
		result += (num % 8) * pow(10, count++);
		num /= 8;
	}
	return result;
}

int main(void)
{
	int num;
	scanf("%d", &num);
	char *array[num];
	int i;
	for (i = 0; i < num; i++)
	{
		scanf("%s", array + i);	
	}
	for (i = 0; i < num; i++)
		//printf("%s\n", array + i);
		printf("%d\n", decimalToOctal(hexToDecimal(array + i)));
	return 0;
}
