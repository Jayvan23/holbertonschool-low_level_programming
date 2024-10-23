#include "main.h"
#include <unistd.h>

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number to get the last digit from.
 *
 * Return: The last digit of the number.
 */

int print_last_digit(int n)
{
int last_digit;

last_digit = n % 10;
if (last_digit < 0)
{
last_digit = -last_digit;
}

char digit = last_digit + '0';
write(1, &digit, 1);

return last_digit;
}
