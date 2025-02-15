#include <stdio.h>
/**
 * main - prints a fibonacci 50 times
 * Return: Always (0)
 */
int main(void)
{
	unsigned long int i, a = 1, b = 2, suma;

	for (i = 1; i <= 98; i++)
	{
		if (i != 98)
		{
			printf("%lu, ", a);
			suma = a + b;
			a = b;
			b = suma;
		}
		else
		{
			printf("%lu\n", a);
		}
	}
	return (0);
}
