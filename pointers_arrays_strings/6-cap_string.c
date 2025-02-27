#include "main.h"

/**
 * cap_string - Capitalizes all words in a string.
 * @str: The input string.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
	int capitalize = 1;
	char *ptr = str;

	while (*ptr)
	{
		if (capitalize && *ptr >= 'a' && *ptr <= 'z')
			*ptr -= 32;

		capitalize = (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' ||
				*ptr == ',' || *ptr == ';' || *ptr == '.' ||
				*ptr == '!' || *ptr == '?' || *ptr == '"' ||
				*ptr == '(' || *ptr == ')' || *ptr == '{' ||
				*ptr == '}');

		ptr++;
	}

	return (str);
}
