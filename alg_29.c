#include<stdio.h>
/*һ��5λ�����ж����ǲ��ǻ���������12321�ǻ���������λ����λ��ͬ��ʮλ��ǧλ��ͬ.*/
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
