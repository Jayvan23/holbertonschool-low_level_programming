#include <stdio.h>
/**
 * main - prints a fibonacci 50 times
 * Return: Always (0)
 */
int main(void)
{
	long int i, a = 1, b = 2, suma;

	for (i = 1; i <= 50; i++)
	{
		if (i != 50)
		{
			printf("%ld, ", a);
			suma = a + b;
			a = b;
			b = suma;
		}
		else
		{
			printf("%ld\n", a);
		}
	}
	return (0);
}
