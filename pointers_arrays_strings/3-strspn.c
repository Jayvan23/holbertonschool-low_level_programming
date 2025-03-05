#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: The main string
 * @accept: The prefix characters to count
 *
 * Return: The number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (!accept[j])
			return (count);
	}
	return (count);
}
