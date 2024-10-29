#include <unistd.h>

/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: Pointer to the string to be printed in reverse.
 */

void print_rev(char *s)
{
	char *start = s;
	int length = 0;

	while (*start)
	{
		length++;
		start++;
	}

	while (length > 0)
	{
		write(1, &s[length - 1], 1);
		length--;
	}
	write(1, "\n", 1);
}
