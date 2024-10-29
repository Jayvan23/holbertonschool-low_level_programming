#include <unistd.h>

/**
 * _puts - Prints a string followed by a new line.
 * @str: Pointer to the string to be printed.
 */
void _puts(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}
