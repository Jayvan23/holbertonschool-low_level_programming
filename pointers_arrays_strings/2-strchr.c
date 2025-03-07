#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: The string to be searched
 * @c: The character to locate
 *
 * Return: Pointer to first occurrence of c, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (*s == c ? s : NULL);
}
