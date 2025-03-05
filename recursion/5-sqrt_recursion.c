#include "main.h"

/**
 * helper_sqrt - Finds the natural square root recursively.
 * @n: The number to find the square root of.
 * @i: The current guess for the square root.
 *
 * Return: The natural square root, or -1 if it does not exist.
 */
int helper_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (helper_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number.
 *
 * Return: The natural square root, or -1 if none exists.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (helper_sqrt(n, 0));
}
