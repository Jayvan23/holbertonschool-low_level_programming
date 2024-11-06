#include "main.h"

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if n is prime, otherwise 0.
 *
 * Description: This function checks if the input number `n` is a prime
 * number using recursion. A prime number is a number greater than 1 that
 * is only divisible by 1 and itself. The function returns 1 if the number
 * is prime and 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (check_prime(n, 2));
}

/**
 * check_prime - Recursively checks if a number is divisible by any number
 *               from 2 up to the square root of the number.
 * @n: The number to check.
 * @i: The current divisor to check against n.
 *
 * Return: 1 if n is prime, otherwise 0.
 */
int check_prime(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);

	return (check_prime(n, i + 1));
}
