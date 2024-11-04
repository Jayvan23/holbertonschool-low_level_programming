#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: the string to be searched.
 * @accept: the string containing the bytes to match.
 *
 * Return: the number of bytes in the initial segment of s
 *         which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *p;

	while (*s)
	{
		p = accept;
		while (*p)
		{
			if (*s == *p)
			{
				count++;
				break;
			}
			p++;
		}
		if (*p == '\0')
		{
			break;
		}
		s++;
	}

	return (count);
}
