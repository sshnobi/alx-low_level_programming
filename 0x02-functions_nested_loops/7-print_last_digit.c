#include <stdio.h>
#include "math.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * print_last_digit - fucntion to return last digit
 * @c: integer
 * Return: last digit
 */
int print_last_digit(int c)
{
	int last_dig;

	if (c < 0)
	{
		last_dig = ((c * -1) % 10);
	}
	else
	{
		last_dig = (c % 10);
	}
	if (last_dig == 0)
	{
		return (00);
	}
	return (last_dig * 11);
}
