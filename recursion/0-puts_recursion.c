#include "main.h"
#include <unistd.h>

/**
 * _puts_recursion - Prints a string followed by a new line.
 * @s: The string to be printed.
 *
 * Description: This function prints each character of the string
 *              recursively, followed by a new line. If the string
 *              is empty (i.e., reaches the null terminator), the
 *              recursion stops and a new line is printed.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		write(1, "\n", 1);
		return;
	}

	write(1, s, 1);
	_puts_recursion(s + 1);
}
