#include <stdio.h>

/**
 * _slower - checks for lower case characters
 * @c: parameter to identify lower cases
 *
 * Return: Always 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
