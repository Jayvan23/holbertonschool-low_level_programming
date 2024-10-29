#include <unistd.h>

/**
 * _putchar - Writes the character c to stdout.
 * @c: The character to print.
 * 
 * Return: On success 1, on error -1.
 */

void _putchar(char c)
{
	write(1, &c, 1);
}
