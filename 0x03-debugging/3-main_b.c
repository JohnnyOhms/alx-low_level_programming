#include <stdio.h>
#include "main.h"

/**
 * main - takes a date and print how many days
 * left in the year, taking leap year int acct
 */

int main(void)
{
	int month;
	int days;
	int year;

	month = 2;
	day = 20;
	year = 2000;
	
	printf("Date: %02d/%02d/%04d\n", month, day, year);

	day = convert_day(month, day);

	print_remaining_days(month, day, year);

	return (0);
}
