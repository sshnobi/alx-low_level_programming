#include "holberton.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: a pointer to a memory area to fill
 * @n: the number of bytes to fill
 * @b: constant byte
 * Return: a pointer to the filled memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
