#include <unistd.h>

/**
 * rev_string - Reverses a string in place.
 * @s: Pointer to the string to be reversed.
 */

void rev_string(char *s)
{
	int i;
	int length = 0;
	char *start = s;
	char temp;

	while (*start)
	{
		length++;
		start++;
	}

	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
