#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The converted integer.
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;
	int started = 0;

	while (*s)
	{
		if (*s == ' ')
		{
			s++;
			continue;
		}
		if (*s == '-' || *s == '+')
		{
			if (started)
				break;
			if (*s == '-')
				sign *= -1;
			s++;
			continue;
		}
		if (*s >= '0' && *s <= '9')
		{
			started = 1;
			num = num * 10 + (*s - '0');

			if (num > 2147483647 && sign == 1)
				return (-1);
			if (num > 2147483648U && sign == -1)
				return (0);
		}
		else if (started)
			break;
		s++;
	}

	if (sign == -1 && num == 2147483648U)
		return (-2147483648);

	return (sign * (int)num);
}
