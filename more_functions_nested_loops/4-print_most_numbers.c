#include "main.h"

/**
 * print_most_numbers - prints the numbers from 0 to 9, except 2 and 4.
 *
 * Return: void.
 */
void print_most_numbers(void)
{
	char numbers[] = "01356789";
	int i;
	
	for (i = 0; i < 8; i++)
	{
		_putchar(numbers[i]);
	}
	_putchar('\n');
}
