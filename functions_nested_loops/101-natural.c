#include <stdio.h>
/**
 * main - print the sum of number multiplies of 3 or 5 below 1024
 * Return: Always (0)
 */
int main(void)
{
	int i, suma;

	for (i = 1; i <= 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			suma += i;
	}
	printf("%d", suma);
	putchar('\n');
	return (0);
}
