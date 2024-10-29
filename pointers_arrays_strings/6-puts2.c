#include <unistd.h>

/**
 * puts2 - Prints every other character of a string.
 * @str: Pointer to the string to be printed.
 */

void puts2(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		if (index % 2 == 0)
		{
			write(1, &str[index], 1);
		}
		index++;
	}
	write(1, "\n", 1);
}
