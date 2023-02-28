#include <stdio.h>
#include <string.h>
#include "math.h"
#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * rev_string - function to reverse string
 * @s: pointer to a string array of characters
 */
void rev_string(char *s)
{
	int size = strlen(s);
	

	s = s + (size - 1);
	while (size > 0)
	{
		printf("%c", *s);
		s--;
		size--;
	}
	/* put("\n"); */
}
