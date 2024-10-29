#include <unistd.h>

/**
 * puts_half - Prints the second half of a string.
 * @str: Pointer to the string to be printed.
 */

void puts_half(char *str)
{
	int length = 0;
	char *start = str;

	while (*start)
	{
		length++;
		start++;
	}

	if (length % 2 == 0)
	{
		start = str + (length / 2);
	}
	else
	{
		start = str + ((length - 1) / 2 + 1);
	}

	while (*start)
	{
		write(1, start, 1);
		start++;
	}
	write(1, "\n", 1);
}
