#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
	printf("Date: %02d/%02d/%04d\n", month, day, year);
	if ((year % 4 == 0 || year % 400 == 0) && !(year % 100 == 0))
	{

		if (month >= 2 && day >= 60)
		 {
			 day++;
		 }

		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		if (month == 2 && day == 29)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		}
		else
		{
			day = day + ((month - 1) * 30);
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}
void main(void)
{
	print_remaining_days(4,1,1997);
}
