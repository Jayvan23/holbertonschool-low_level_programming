#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Duplicates a string in a newly allocated memory
 * @str: The string to duplicate
 *
 *Return:Pointer to the duplicated stringor NULL if str is NULL or malloc fails
 */
char *_strdup(char *str)
{
	char *dup;
	int len, i;

	if (str == NULL)
		return (NULL);

	len = strlen(str);
	dup = malloc((len + 1) * sizeof(char));

	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dup[i] = str[i];

	return (dup);
}
