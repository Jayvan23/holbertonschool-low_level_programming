#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - Prints a string in reverse using recursion.
 * @s: The string to be printed in reverse.
 *
 * This function checks if the string is not empty and prints each character
 * recursively from the end to the beginning.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	putchar(*s);
}
