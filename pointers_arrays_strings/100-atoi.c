#include "main.h"
#include <limits.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The converted integer value.
 */
int _atoi(char *s)
{
    int sign = 1;
    unsigned int result = 0;
    int found_digit = 0;

    while (*s)
    {
        if (*s == '-')
            sign *= -1;
        else if (*s >= '0' && *s <= '9')
        {
            found_digit = 1;
            if (result > (unsigned int)INT_MAX / 10 ||
                (result == (unsigned int)INT_MAX / 10 && (*s - '0') > (unsigned int)INT_MAX % 10))
            {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }
            result = result * 10 + (*s - '0');
        }
        else if (found_digit)
            break;
        s++;
    }

    return (int)(result * sign);
}
