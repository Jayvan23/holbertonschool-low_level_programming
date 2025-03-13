#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings into newly allocated memory
 * @s1: First string
 * @s2: Second string
 *
 * Return: Pointer to the concatenated string, or NULL if malloc fails
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len1 = (s1 != NULL) ? strlen(s1) : 0;
	int len2 = (s2 != NULL) ? strlen(s2) : 0;
	int i, j;

	concat = malloc((len1 + len2 + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	for (j = 0; j < len2; j++)
		concat[i + j] = s2[j];

	concat[i + j] = '\0';

	return (concat);
}
