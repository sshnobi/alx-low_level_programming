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
	int size = strlen(src);
	int i = 0;

	while (i < size)
	{
		*dest = *src;
		dest++;
		src++;
		if (*src == '\0')
			break;
	}
	return (dest);
}
