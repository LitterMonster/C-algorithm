#include<stdio.h>
#include<string.h>
#include<math.h>
/*十六进制转十进制*/
int main(void)
{
	char num[10];
	scanf("%s", num);
	int len = strlen(num);
	int i, sum = 0;
	for (i = 0; i < len; i++)
	{
		if (num[i] >= 'A' && num[i] <= 'F')
			sum = sum + (10 + (num[i] - 'A')) * pow(16, len - i - 1);
		else
			sum = sum + (num[i] - '0') * pow(16, len - i - 1);
	}
	printf("%d", sum);
}
