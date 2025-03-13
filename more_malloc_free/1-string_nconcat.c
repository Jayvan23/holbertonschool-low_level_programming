#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings up to `n` bytes of `s2`
 * @s1: First string
 * @s2: Second string
 * @n: Maximum number of bytes to concatenate from `s2`
 *
 * Return: Pointer to newly allocated concatenated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int len1 = 0, len2 = 0, i, j;
    char *new_str;

    if (s1 != NULL)
        len1 = strlen(s1);
    if (s2 != NULL)
        len2 = strlen(s2);

    if (n >= len2)
        n = len2;

    new_str = malloc(len1 + n + 1);
    if (new_str == NULL)
        return (NULL);

    for (i = 0; i < len1; i++)
        new_str[i] = s1[i];

    for (j = 0; j < n; j++)
        new_str[i + j] = s2[j];

    new_str[i + j] = '\0';

    return (new_str);
}
