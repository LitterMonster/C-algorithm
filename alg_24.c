#include<stdio.h>
/*��ӡ����*/

main()
{
	int i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2 * (i + 1); j++)
			printf("*");
		printf("\n");
	}
}
