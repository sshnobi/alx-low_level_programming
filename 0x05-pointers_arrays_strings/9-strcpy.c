#include <stdio.h>
#include <string.h>
#include "math.h"
#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * _strcpy - function to print an array in reverse
 * @dest: pointer to a string array of characters
 * @src: source
 * Return: string pointer
 */
char *_strcpy(char *dest, char *src)
{
	int size = _strlen(src);
	int i = 0;

	for (i = 0; i <= size; i++)
	{
		*dest = *src;
		dest++;
		src++;
		if (*src == '\0')
			break;
	}
	return (dest);
}

/**
 * _strlen - returns the length of a string
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
