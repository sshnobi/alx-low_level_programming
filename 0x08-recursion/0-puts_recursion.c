#include "main.h"

/*
*
*/

void _puts_recursion(char *s)
{
	if(*s == '/0')
		return ();
	printf('%s', *s);
	*s ++;
	_puts_recursion(*s)
	
}
