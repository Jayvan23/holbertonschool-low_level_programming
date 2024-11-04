#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - locates the first occurrence of any byte in accept in s.
 * @s: the string to be searched.
 * @accept: the string containing the bytes to match.
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s)
	{
		p = accept;
		while (*p)
		{
			if (*s == *p)
			{
				return (s);
			}
			p++;
		}
		s++;
	}

	return (NULL);
}
