#include "main.h"

/**
 * cap_string - Capitalizes all words in a string.
 * @str: The string to be modified.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i = 0;

	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] -= 32;
	}

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
				str[i] == ',' || str[i] == ';' || str[i] == '.' ||
				str[i] == '!' || str[i] == '?' || str[i] == '"' ||
				str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			i++;

			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
			}
		}
		else
		{
			if (i > 0 &&
					(str[i - 1] == ' ' || str[i - 1] == '\t' ||
					 str[i - 1] == '\n' || str[i - 1] == ',' ||
					 str[i - 1] == ';' || str[i - 1] == '.' ||
					 str[i - 1] == '!' || str[i - 1] == '?' ||
					 str[i - 1] == '"' || str[i - 1] == '(' ||
					 str[i - 1] == ')' || str[i - 1] == '{' ||
					 str[i - 1] == '}'))
			{
				if (str[i] >= 'a' && str[i] <= 'z')
				{
					str[i] -= 32;
				}
			}
			i++;
		}
	}

	return (str);
}
