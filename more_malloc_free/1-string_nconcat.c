#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings up to n bytes of s2.
 * @s1: First string.
 * @s2: Second string.
 * @n: Number of bytes of s2 to include.
 * 
 * Return: Pointer to newly allocated space containing concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *concat;
    unsigned int len1 = s1 ? strlen(s1) : 0;
    unsigned int len2 = s2 ? strlen(s2) : 0;
    unsigned int size = len1 + (n < len2 ? n : len2) + 1;

    concat = malloc(size);
    if (!concat)
        return (NULL);

    if (s1)
        strcpy(concat, s1);
    if (s2)
        strncat(concat, s2, n);
    
    return (concat);
}
