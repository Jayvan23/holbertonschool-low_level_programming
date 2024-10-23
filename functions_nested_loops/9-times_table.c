#include <unistd.h>

/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 * This function prints the multiplication table for the numbers
 * 0 through 9, formatted in a grid with each number separated by
 * a comma and a space.
 */

void times_table(void)
{
    int i, j;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
	{
            int product = i * j;
            print_number(product);
            if (j < 9) {
                _putchar(',');
                _putchar(' ');
            }
        }
        _putchar('\n');
    }
}

int main(void)
{
    times_table();
    return (0);
}
