#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number for which the factorial is to be calculated.
 *
 * If n is less than 0, the function returns -1 to indicate an error.
 * The factorial of 0 is defined as 1.
 *
 * Return: The factorial of n, or -1 if n is less than 0.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
