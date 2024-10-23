#include <stdio.h>

/**
 * _islower - Checks if a character is a lowercase letter.
 * @c: The character to be checked (passed as an int).
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
