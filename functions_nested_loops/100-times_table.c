#include <stdio.h>

void print_times_table(int n)
{
    if (n < 0 || n > 15)
    {
        return;
    }
    
   for (int i = 0; i <= n; i++)
    {
       for (int j = 0; j <= n; j++)
	{
            int product = i * j;
            if (j > 0) {
                putchar(' ');
            }
            if (product < 10)
	    {
                putchar('0' + product);
            }
	    else 
		    if (product < 100)
		    {
                putchar('0' + (product / 10));
                putchar('0' + (product % 10));
            } 
	    else 
	    {
                putchar('0' + (product / 100));
                putchar('0' + ((product / 10) % 10));
                putchar('0' + (product % 10));
            }
        }
        putchar('\n');
    }
}
