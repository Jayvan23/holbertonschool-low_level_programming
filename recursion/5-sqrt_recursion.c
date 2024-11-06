#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Description: This function returns the natural square root of a number
 * by calling the helper function `_sqrt_helper` that finds the square root
 * recursively starting from 1.
 *
 * Return: The natural square root of `n` if it exists, otherwise -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 1));
}

/**
 * _sqrt_helper - A helper function to find the square root recursively.
 * @n: The number to find the square root of.
 * @i: The current guess for the square root.
 *
 * Description: This helper function recursively checks whether `i * i`
 * equals `n`. If it finds that `i * i == n`, it returns `i` as the square root
 * If `i * i` exceeds `n`, it returns `-1`, indicating that no natural square
 * root exists for the number `n`.
 *
 * Return: The square root of `n` if it exists, otherwise -1.
 */
int _sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt_helper(n, i + 1));
}
