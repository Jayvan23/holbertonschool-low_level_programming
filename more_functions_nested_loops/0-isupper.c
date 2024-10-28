#include "main.h"

/**
 * _isupper - checks if a character is uppercase.
 * @c: The character to check, passed as an integer.
 *
 * Return: 1 if c is uppercase, 0 otherwise.
 *
 * Description: This function checks whether the input character
 * falls within the ASCII range of uppercase letters ('A' to 'Z').
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
