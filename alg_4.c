#include <stdio.h>

int months[7] = {1, 3, 5, 7, 8 ,10 ,12};
int layue(int month)
{
	int i;
	for (i = 0; i < 7; i++)
	    if (months[i] == month)
	        return 1;
	return 0;
}

int runnian(int year)
{
	if ((year % 4 == 0 && year % 100 == 0) || year % 400 == 0)
	    return 1;
	return 0;
}

int main(void)
{
	int year, month, day;
	int sum = 0;
	scanf("%d %d %d", &year, &month, &day);
	
	
	int temp;
	for (temp = 1; temp <= month - 1; temp++)
	{
		if (layue(temp))
		    sum += 31;
		else if (temp == 2 && runnian(year) == 1)
		    sum += 29;
		else if (temp == 2 && runnian(year) == 0)
		    sum += 28;
		else 
		    sum += 30;
	}
	
	sum += day;
	printf("Day is %d\n", sum);
	return 0;
}
