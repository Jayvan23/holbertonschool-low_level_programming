#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: A pointer to the newly allocated space in memory
 *which contains s1 followed by s2, or NULL if memory allocation fails
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int len1 = 0, len2 = 0, i, j;

	if (s1 != NULL)
		while (s1[len1] != '\0')
			len1++;

	if (s2 != NULL)
		while (s2[len2] != '\0')
			len2++;

	concat_str = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat_str[i] = s1[i];

	for (j = 0; j < len2; j++)
		concat_str[i + j] = s2[j];

	concat_str[len1 + len2] = '\0';

	return (concat_str);
}
