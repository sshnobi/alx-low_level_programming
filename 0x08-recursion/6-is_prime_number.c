
#include "main.h"

/**
 * is_prime_number - a function that checks if an integer
 * is a prime number
 * @n: the number to check
 * Return: 0 if @n is not a prime number,
 * 1 if it is a prime number
 */

int is_prime_number(int n)
{
	return (primeHelper(n, 2));
}

/**
 * primeHelper- a helper function that searches if a number is prime
 * @a: the number to check
 * @b: the numbers to iterate through
 * Return: 0 if number is a prime, 1 if it is not a prime
 */

int primeHelper(int a, int b)
{
	if (a <= 1 || a % b == 0)
		return (0);
	else if (a == b)
		return (1);
	else if (a > b)
		primeHelper(a, b + 1);

	return (1);
}
