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
	int j = strlen(s) - 1;
	char tmp;
	int i;

	i = 0;

	while (i < j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++;
		j--;
	}
	/* put("\n"); */
}
