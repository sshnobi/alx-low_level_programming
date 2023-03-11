
#include "main.h"

/**
 * is_palindrome - function to check if a string is a palindrome
 * @s: the string to check
 * Return: 1 if string is a palindrome, 2 if it is not
 */

int is_palindrome(char *s)
{
	int i = 0;
	int length = _strlen_recursion(s) - 1;

	return (palindromeChecker(s, length, i));
}

/**
 * _strlen_recursion - function to get the length of a string
 * @s: the string to check the length
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));

	return (0);
}

/**
 * palindromeChecker - function to check the string
 * @str: the string to be checked
 * @len: the length of the string
 * @i: the incrementor, starts at 0
 * Return: 1 if it's a palindrome, 0 if it's not
 */

int palindromeChecker(char *str, int len, int i)
{
	if (i < len && str[i] == str[len])
		return (palindromeChecker(str, len - 1, i + 1));
	if (str[i] != str[len])
		return (0);
	return (1);
}
