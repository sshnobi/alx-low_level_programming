#include <stdio.h>
#include "math.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - main fucntion
 * Return: always 0
 */
int main(void)
{
	long current = 2;
	long previous = 1;
	int count = 0;

	while (count < 50)
	{
		if (count == 0)
		{
			printf("%ld", previous);
			count++;
		}
		else if (count == 1)
		{
			printf(", %ld", current);
			count++;
		}
		else
		{
			long fib = current + previous;

			previous = current;
			current = fib;
			count++;
			printf(", %ld", fib);
		}
	}
	printf("\n");
	return (0);
}
