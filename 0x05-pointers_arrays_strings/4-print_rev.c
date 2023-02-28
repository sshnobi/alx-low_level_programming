#include <stdio.h>
#include <string.h>
#include "math.h"
#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * print_rev - function to print an array in reverse
 * @s: pointer to a string array of characters
 */
void print_rev(char *s)
{
	int size = strlen(s);

	while (size > 0)
	{
		printf("%c", s[size - 1]);
		size--;
	}
	printf("\n");
}
