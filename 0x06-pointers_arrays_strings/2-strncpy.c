#include "main.h"

/**
 * _strncpy - fucntion that copies n bytes of a source into buffer of a destination string
 * @dest: copy source to this buffer
 * @src: the source of the bytes to be copied
 * @n: number of bytes to be copied
 * Return: final string with the copied bytes
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
