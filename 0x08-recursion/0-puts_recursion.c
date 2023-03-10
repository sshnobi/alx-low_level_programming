#include "main.h"

/**
* _puts_recursion - function to print a string recursively
*
* @*s: The string
* Return: nothing
**/

void _puts_recursion(char *s)
{
	if(*s == '/0')
		return;
	putchar(*s);
	s++;
	_puts_recursion(s)
	
}
