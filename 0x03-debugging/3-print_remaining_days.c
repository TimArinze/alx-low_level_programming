#include <stdio.h>
#include "main.h"
/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap year into account
 * @month: month format
 * @day: day of the month
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
	if (year % 4 == 0)
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
		if (month >= 2 && day >= 59)
		{
			day++;
		}
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 365 - day);
		else
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
	}
}