
#include "main.h"

/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s: the string to reverse
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	while (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
