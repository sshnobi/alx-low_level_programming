#include "main.h"

/**
 * _strchr - a function to locate a character in a string
 * @s: the string to check
 * @c: the character to search
 * Return: a pointer to the first occurance of the character in the string, NULL if the character isn't found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		else
			s++;
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
