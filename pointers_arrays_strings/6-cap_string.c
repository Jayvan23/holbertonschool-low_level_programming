#include "main.h"

/**
 * cap_string - Capitalizes all words in a string.
 * @str: The string to be modified.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int j;
	int i = 0;
	int capitalize = 1;
	char separators[] = " \t\n,;.!?\"(){}";

	while (str[i] != '\0')
	{
		if (capitalize && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
			capitalize = 0;
		}
		else if (!capitalize && (str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] += 32;
		}

		for (j = 0; separators[j] != '\0'; j++)
		{
			if (str[i] == separators[j])
			{
				capitalize = 1;
				break;
			}
		}

		if (str[i] != ' ')
		{
			capitalize = 0;
		}

		i++;
	}

	return (str);
}
