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

	s = s + (size - 1);
	while (size > 0)
	{
		printf("%c", *s);
		s--;
		size--;
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
