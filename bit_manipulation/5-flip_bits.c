#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to flip to convert
 * one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result)
	{
		count++;
		xor_result &= (xor_result - 1);
	}

	return (count);
}
