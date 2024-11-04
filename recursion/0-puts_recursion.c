#include <stdio.h>

/**
 * _puts_recursion - Prints a string followed by a new line using recursion.
 * @s: The string to be printed.
 *
 * This function checks if the string is not empty and prints each character
 * recursively until the end of the string is reached, then prints a newline.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
