#include <stdio.h>
#include <string.h>
#include "math.h"
#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * puts_half - function to print half an array
 * @str: pointer to a string array of characters
 */
void puts_half(char *str)
{
	int size = strlen(str);
	int i = size / 2;

	if (size % 2 != 0)
		i++;

	while (i < size)
	{
		if (i >= (size / 2))
		{
			/* printf("%c", *str); */
		}
		printf("%c", str[i]);
		i++;
	}
	printf("\n");
}
