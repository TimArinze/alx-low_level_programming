#include "main.h"

/**
 * convert_day - converts day of month to day of year, without accounting
 * for leap year
 * @month: month in number format
 * @day: day of the month
 * Return: day of year
 */

int convert_day(int month, int day)
{
	switch (month)
	{
		case 2:
			day = 31 + day;
			break;
		case 3:
			day =
