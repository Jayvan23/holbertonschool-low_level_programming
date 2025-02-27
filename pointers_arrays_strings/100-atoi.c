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
    int sign = 1, found_digit = 0;
    int result = 0, prev_result;

    while (*s)
    {
        if (*s == '-')
            sign *= -1;
        else if (*s >= '0' && *s <= '9')
        {
            found_digit = 1;
            prev_result = result;
            result = result * 10 + (*s - '0');

            if (prev_result != result / 10)  
                return (sign == 1) ? INT_MAX : INT_MIN;
        }
        else if (found_digit)
            break;
        s++;
    }

    return result * sign;
}
