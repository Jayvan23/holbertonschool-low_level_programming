#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string in a newly allocated memory space.
 * @str: The string to duplicate.
 *
 * Return: Pointer to the duplicated string, or NULL if failure.
 */
char *_strdup(char *str)
{
    char *dup;
    int i = 0, len = 0;

    if (str == NULL)
        return (NULL);

    while (str[len])
        len++;

    dup = malloc((len + 1) * sizeof(char));
    if (dup == NULL)
        return (NULL);

    for (i = 0; i < len; i++)
        dup[i] = str[i];
    dup[i] = '\0';

    return (dup);
}

/**
 * _puts - Prints a string using _putchar.
 * @str: The string to print.
 */
void _puts(char *str)
{
    while (*str)
    {
        _putchar(*str);
        str++;
    }
    _putchar('\n');
}
