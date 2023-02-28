#include <stdio.h>
#include "main.h"

/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * swap_int - swap the value of two integers via pointers
 * @a: pointer to integer value of first variable
 * @b: pointer to integer value of second variable
 */
void swap_int(int *a, int *b)
{
	int c = *b;
	*b = *a;
	*a = c;
}
