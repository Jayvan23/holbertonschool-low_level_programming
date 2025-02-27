#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: Input string.
 *
 * Return: Pointer to the modified string.
 */
char *leet(char *str)
{
	char *ptr = str;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";
	int i;

	while (*ptr)
	{
		for (i = 0; letters[i]; i++)
		{
			if (*ptr == letters[i])
			{
				*ptr = numbers[i];
				break;
			}
		}
		ptr++;
	}

	return (str);
}
