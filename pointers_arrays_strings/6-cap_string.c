#include "main.h"

/**
 * cap_string - Capitalizes all words in a string.
 * @str: The string to be modified.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
    int i = 0;
    int capitalize = 1;

    while (str[i] != '\0')
    {
        if (capitalize && (str[i] >= 'a' && str[i] <= 'z'))
        {
            str[i] -= 32;
        }
        else if (!capitalize && (str[i] >= 'A' && str[i] <= 'Z'))
        {
            str[i] += 32;
        }

        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
            str[i] == ',' || str[i] == ';' || str[i] == '.' ||
            str[i] == '!' || str[i] == '?' || str[i] == '"' ||
            str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
        {
		 i++;
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] -= 32;
            }
        }
        else
        {
            i++;
        }
    }

    return str;
}
