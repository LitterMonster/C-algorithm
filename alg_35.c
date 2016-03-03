#include<stdio.h>
int main(void)
{
	char ch[27], s[27];
	int i, j, m, n;
	scanf("%d %d", &n, &m);
	for (i = 0; i < m; i++)
	{
		ch[i] = 'A' + i;
		s[i] = 'B' + i;
	}
	ch[m] = '\0';
	s[m - 1] = '\0';
	for (i = 0; i < n; i++)
	{
		printf("%c", ch[i]);
		for (j = 0; j < m - 1; j++)
			printf("%c", s[j]);
		//Change elements
		s[m - 1] = '\0';
		for (j = m - 2; j >= 0; j--) 
		{
			s[j] = s[j - 1];
		}
		s[0] = ch[i];
		printf("\n");
	}
	return 0;
}
