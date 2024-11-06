#include "main.h"

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if n is prime, otherwise 0.
 *
 * Description: This function checks if the input number `n` is a prime
 * number. A prime number is a number greater than 1 that is only divisible
 * by 1 and itself. The function returns 1 if the number is prime and 0
 * otherwise. The check is performed by testing divisibility up to the
 * square root of `n` for odd numbers greater than 2. Even numbers greater
 * than 2 are automatically considered not prime.
 */
int is_prime_number(int n)
{
    int i;

    if (n <= 1)
        return (0);
    if (n == 2)
        return (1);
    if (n % 2 == 0)
        return (0);

    for (i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return (0);
    }

    return (1);
}
