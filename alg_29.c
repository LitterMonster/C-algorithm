#include<stdio.h>
/*一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同.*/
int main(void)
{
	char num[10];
	scanf("%s", num);
	int len = strlen(num);
	int i;
	int state = 1;
	for (i = 0; i < len / 2; i++)
	{
		if (num[i] != num[len - 1 - i])
		{
			printf("No!\n");
			state = 0;
			break;
		}
	}
	if (state == 1)
		printf("Yes!\n");
	
}
