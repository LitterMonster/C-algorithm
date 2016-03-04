#include<stdio.h>
#include"string.h"
int main(void)
{
	char str1[20], str2[20];
	scanf("%s", str1);
	scanf("%s", str2);
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	
	if (len1 != len2)
		printf("1\n");
	else 
		if (strcmp(str1, str2) == 0)
			printf("2\n");
		else if (strcmpi(str1, str2) == 0)
			printf("3\n");
		else
			printf("4\n");
	
	
}
