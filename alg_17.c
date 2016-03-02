#include<stdio.h>
/**
 *输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。 
 */
int main(void)
{
	
	int character, space, number, other;
	character = space = number = other = 0;
	
	char temp;
	while((temp = getchar()) != '\n')
	{
		if (temp >= 'a' && temp <= 'z' || temp >= 'A' && temp <= 'Z')
			character++;
		else if (temp == ' ')
			space++;
		else if (temp >= '0' && temp <= '9')
			number++;
		else
			other++;
	}
	printf("Character is %d\n space is %d\n number is %d\n other is %d\n",
		character, space, number, other);
	return 0;
 } 
