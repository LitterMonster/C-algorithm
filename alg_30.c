#include<stdio.h>
int main(void)
{
	char day[3];
	int i = 0, j;
	while((day[i++] = getchar()) != '\n');
	day[i] = '\0';
	j = 0;
	switch(day[j])
	{
		case 'M':
		case 'm':
			printf("Monday!\n");
			break;
		case 'F':
		case 'f':
			printf("Friday!\n");
			break;
		case 'W':
		case 'w':
			printf("Wednesday!\n");
			break;
		case 'T':
		case 't':
			if (day[j + 1] == 'u' || day[j + 1] == 'U')
				printf("Tuesday!\n");
			else if (day[j + 1] == 'h' || day[j + 1] == 'H')
				printf("Thurday!\n");
			else
				printf("Wrong!\n");
			break;
		case 'S':
		case 's':
			if (day[j + 1] == 'a' || day[j + 1] == 'A')
				printf("Saturday\n");
			else if (day[j + 1] == 'U' || day[j + 1] == 'u')
				printf("Sunday!\n");
			else
				printf("Wrong!\n");
			break;
	}
	return 0;
}
