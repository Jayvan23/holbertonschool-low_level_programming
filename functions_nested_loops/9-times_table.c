#include <unistd.h>
#include "main.h"

/**
 * times_table - prints the nine times table, starting with cero
 *
 *
 * Return: void
 */

void times_table(void)
{
	int i, j, product;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			product = i * j;

			if (product < 10)
			{
				if (j != 0)
				{
					_putchar(' ');
				}
				_putchar('0' + product);
				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar('0' + (product / 10));
				_putchar('0' + (product % 10));
				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
