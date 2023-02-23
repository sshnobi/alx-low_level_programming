#include <stdio.h>
#include "main.h"
#include "math.h"

/**
 * print_last_digit - print last digit of integer
 * @n: integer argument
 * Return: last digit of number
 */

int print_last_digit(int n)
{
	int last_dig;

	if (n < 0)
	{
		last_dig = ((n * -1) % 10);
	}
	else
	{
		last_dig = (n % 10);
	}

	if (last_dig == 0)
	{
		return (00);
	}
	return (last_dig * 11);
}
