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
	char tmp;
	int i;

	i = 0;
	size --;

	while (i < size)
	{
		tmp = s[i];
		s[i] = s[size];
		s[size] = tmp;
		i++;
		size--;
	}
	/* put("\n"); */
}
