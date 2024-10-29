#include "main.h"

/**
 * _strncat - Concatenates two strings up to n bytes from src
 * @dest: The destination string
 * @src: The source string to append
 * @n: The maximum number of bytes to append from src
 *
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr)
	{
		ptr++;
	}

	while (n > 0 && *src)
	{
		*ptr++ = *src++;
		n--;
	}

	*ptr = '\0';

	return (dest);
}
