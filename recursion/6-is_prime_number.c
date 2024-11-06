#include "main.h"

int check_prime(int n, int i);
/**
 * is_prime_number - Determines if a given number is a prime number.
 * @n: The number to check.
 *
 * This function checks if the integer `n` is prime by calling
 * the `check_prime` function, which performs a recursive check
 * for divisibility starting from 2 up to the square root of `n`.
 *
 * Return:
 *  - 1 if `n` is a prime number,
 *  - 0 if `n` is not a prime number.
 *
 * A prime number is a number greater than 1 that is not divisible
 * by any positive integers other than 1 and itself.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (check_prime(n, 2));
}

int check_prime(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (check_prime(n, i + 1));
}
