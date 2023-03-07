#include "main.h"

/**
 * _memcpy - a function that copies a memory area
 * @dest: destination of the copied memory
 * @n: the number of bytes copied
 * @src: the memory area to copy from
 * Return: a pointer to the destination memory areaa @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
