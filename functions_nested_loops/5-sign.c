#include "main.h"
#include <unistd.h>

/**
 * print_sign - Prints the sign of a number.
 * @n: The number to be checked.
 *
 * Return: 1 and prints '+' if n is greater than zero,
 *         0 and prints '0' if n is zero,
 *         -1 and prints '-' if n is less than zero.
 */

int print_sign(int n)
{
if (n > 0)
{
write(1, "+", 1);
return (1);
} else if (n == 0)
{
write(1, "0", 1);
return (0);
} else
{
write(1, "-", 1);
return (-1);
}
}
