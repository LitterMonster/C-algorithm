#include<stdio.h>
#include<string.h>
#include<math.h>
int main(void)
{
	char str1[10], str2[10];
	char *p, *q;
	scanf("%s", str1);
	scanf("%s", str2);
	p = str1;
	q = str2;
	int flag1, flag2, flag3;
	flag1 = flag2 = flag3 = 0;
	if (strlen(str1) != strlen(str2))
		printf("1");
	else
	{
		if (flag1 == 0)
		while(*p != '\0' && *q != '\0')
		{
			if (*(p++) != *(q++))
				if (*p - *q != 32 || *q -*p != -32)
					flag1 = 1;
		}
		if (flag1 == 1)
			printf("4");
		else 
			printf("2");
		if (flag3 == 0)	
		while(*p != '\0' && *q != '\0')
		{
			if (*p - *q == 32 || *q - *p == -32) 
			{
				flag3 = 0;
			}
			else
				flag3 == 1;
		}
	}
	
	if (flag3 == 1)
		printf("3");
}
