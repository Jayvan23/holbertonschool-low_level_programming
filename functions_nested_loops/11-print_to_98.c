#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print numbers to 98
 * Return: all numbers to 98
 * @n: number from user
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		if (n > 98)
		{
			for (; n > 98; n--)
			{
				printf("%d, ", n);
			}
		}
		if (n == 98)
		{
			printf("%d\n", n);
		}
	}
	if (n < 97)
	{
		if (n < 98)
		{
			for (; n < 98; n++)
			{
				printf("%d, ", n);
			}
		}
		if (n == 98)
		{
			printf("%d\n", n);
		}
	}
}
