#include "main.h"

/**
 * _strncat - Concatenates two strings up to n bytes.
 * @dest: Destination string.
 * @src: Source string.
 * @n: Number of bytes to append.
 *
 * Return: Pointer to resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr)
		ptr++;

	while (n-- > 0 && *src)
		*ptr++ = *src++;

	*ptr = '\0';
	return (dest);
}
