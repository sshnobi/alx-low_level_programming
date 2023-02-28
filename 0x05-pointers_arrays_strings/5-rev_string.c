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
	int size = _strlen(s);
	char tmp;
	int i, j;
	
	i = 0;
	j = size - 1;

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

/**
 * _strlen - returns length of a string
 * @s: string
 * Return: len
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
