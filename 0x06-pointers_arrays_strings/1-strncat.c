#include "main.h"

/**
 * _strncat - function to concatenate n bytes to a destination string
 * @dest: string to be appended
 * @src: string to append to dest
 * @n: number of characters to append to dest
 * Return: dest - concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0') /*Get to end of dest string */	
		i++;

	while (src[j] != src[n]) /*append the characters to end of dest string */
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0'; /*append string terminator */

	return (dest);
}
