#include <stdio.h>
#include "math.h"
#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * _strlen - function to get size of an array
 * @s: pointer to a string array of characters
 * Return: returns integer length
 */
int _strlen(char *s)
{
	int size = 0;

	/* char strng[] = &(*s); */
	while (*s != '\0')
	{
		/*
		* the current character is not \0
		* so we will print the character
		* move to the next character.
		*/
		size++;
		s++;
	}
	return (size);
}
