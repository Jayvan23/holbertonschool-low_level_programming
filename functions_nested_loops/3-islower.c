#include "main.h"

/**
 * _islower - check if is lower or not
 * @c: data from user
 * Return: If is lower pront 1.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
