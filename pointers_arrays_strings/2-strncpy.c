#include "main.h"

/**
 * _strncpy - Copies up to n characters from the src string to dest
 * @dest: The destination string
 * @src: The source string to copy
 * @n: The maximum number of characters to copy from src
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (n > 0 && *src)
	{
		*ptr++ = *src++;
		n--;
	}
	
	while (n > 0)
	{
		*ptr++ = '\0';
		n--;
	}
	
	return (dest);
}
