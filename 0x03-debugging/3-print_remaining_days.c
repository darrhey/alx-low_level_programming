#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of the month
 * @year: year
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
int days;
days = convert_day(month, day);
if (year % 4 == 0)
{
if ((month >= 2) && (days >= 60))
{
days += 1;
}
printf("Day of the year: %d\n", days);
printf("Remaining days: %d\n", 366 - days);
}
else
{
printf("Day of the year: %d\n", days);
printf("Remaining days: %d\n", 365 - days);
}
}
