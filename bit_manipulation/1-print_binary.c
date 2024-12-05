#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 *
 * Description: This function prints the binary representation of an
 * unsigned long integer `n` to the standard output. It prints the
 * binary digits (0s and 1s) from the most significant bit (MSB) to
 * the least significant bit (LSB). If the number is 0, it prints "0".
 * Leading zeros are not printed, except for the special case of 0.
 */
void print_binary(unsigned long int n)
{
	int started = 0;
	unsigned long int i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	i = 1UL << (sizeof(n) * 8 - 1);

	while (i > 0)
	{
		if (n & i)
		{
			_putchar('1');
			started = 1;
		}
		else if (started)
		{
			_putchar('0');
		}
		i >>= 1;
	}
}
