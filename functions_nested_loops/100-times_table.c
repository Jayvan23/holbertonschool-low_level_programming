#include "main.h"

void print_times_table(int n)
{
    int i, j, product;

    if (n < 0 || n > 15)
        return;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            product = i * j;
            if (j > 0)
            {
                _putchar(',');
                _putchar(' ');
            }
            if (product < 10 && j > 0)
            {
                _putchar(' ');
                _putchar(' ');
            }
            if (product >= 10 && product < 100)
            {
                _putchar(' ');
            }
            _putchar(product / 10 + '0'); // Tens place
            _putchar(product % 10 + '0'); // Ones place
        }
        _putchar('\n');
    }
}
