#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * cap_string - Capitalizes all words in a string.
 * @str: The string to be modified.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i = 0;
	char separators[] = " \t\n,;.!?\"(){}";

	while (str[i] != '\0')
	{
		if (i == 0 || strchr(separators, str[i - 1]) != NULL)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
			}
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}

		i++;
	}

	return (str);
}
