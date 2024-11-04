#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string whose length is to be calculated.
 *
 * This function counts the characters in the string recursively until
 * the null terminator is reached, at which point it returns the count.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
