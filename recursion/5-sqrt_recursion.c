#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number for which the square root is to be calculated.
 *
 * If n does not have a natural square root, the function returns -1.
 * This function uses a helper function to compute the square root recursively.
 *
 * Return: The natural square root of n, or -1 if n does not have a square root
 */
int _sqrt_recursion(int n)
{
	int sqrt_helper(int n, int guess);

	if (n < 0)
	{
		return (-1);
	}
	return (sqrt_helper(n, 0));
}

int sqrt_helper(int n, int guess)
{
	if (guess * guess > n)
	{
		return (-1);
	}
	if (guess * guess == n)
	{
		return (guess);
	}
	return (sqrt_helper(n, guess + 1));
}
