#include "main.h"

/**
* _puts_recursion - function to print a string recursively
*
* @*s: The string
* Return: nothing
**/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	puts(*s);
	_puts_recursion(s + 1);
}
