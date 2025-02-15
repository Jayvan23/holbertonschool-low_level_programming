#include "main.h"

/**
 * print_single_number - prints a single number with proper formatting
 * @result: The result to print.
 * @is_first: Boolean indicating if it is the first number in the row.
 */
void print_single_number(int result, int is_first)
{
    if (!is_first)
    {
        _putchar(',');
        _putchar(' ');
    }

    if (result < 10)
    {
        if (!is_first)
            _putchar(' ');
        _putchar(' ');
        _putchar('0' + result);
    }
    else if (result < 100)
    {
        _putchar(' ');
        _putchar('0' + result / 10);
        _putchar('0' + result % 10);
    }
    else
    {
        _putchar('0' + result / 100);
        _putchar('0' + (result / 10) % 10);
        _putchar('0' + result % 10);
    }
}

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: The number to print the times table for.
 *
 * Return: Nothing. If n is less than 0 or greater than 15, do nothing.
 */
void print_times_table(int n)
{
    int i, j, result;

    if (n < 0 || n > 15)
    {
        return;
    }

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            result = i * j;
            print_single_number(result, j == 0);
        }
        _putchar('\n');
    }
}
