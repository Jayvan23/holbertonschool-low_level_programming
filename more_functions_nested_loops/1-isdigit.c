#include "main.h"

/**
 * _isdigit - checks if a character is a digit.
 * @c: The character to check, passed as an integer.
 *
 * Return: 1 if c is a digit (0-9), 0 otherwise.
 *
 * Description: This function checks whether the input character
 * falls within the ASCII range of digit characters ('0' to '9').
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
