#include <stdlib.h>

/**
 * _strlen - Calculates the length of a string
 * @str: The string
 *
 * Return: Length of the string
 */
unsigned int _strlen(char *str)
{
    unsigned int len = 0;

    if (str == NULL)
        return (0);

    while (str[len] != '\0')
        len++;

    return (len);
}

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
    unsigned int len1, len2, i, j;
    char *new_str;

    len1 = _strlen(s1);
    len2 = _strlen(s2);

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
