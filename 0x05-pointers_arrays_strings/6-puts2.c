#include <stdio.h>
#include "math.h"
#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * puts2 - function to print an array
 * @str: pointer to a string array of characters
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		printf("%c", *str);
		str = str + 2;
	}
	printf("\n");
}
