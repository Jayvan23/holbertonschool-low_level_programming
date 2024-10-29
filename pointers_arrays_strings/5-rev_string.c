#include <string.h>

/**
 * rev_string - Reverses a string in place.
 * @s: Pointer to the string to be reversed.
 */

void rev_string(char *s)
{
	int length = strlen(s);
	int i;
	char temp;

	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
