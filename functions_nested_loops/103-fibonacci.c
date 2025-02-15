#include <stdio.h>
/**
 * main - prints the sum of the fibonacci < 4000000
 * Return: Always (0)
 */
int main(void)
{
	long int i, a = 1, b = 2, suma, duplicados = 0;

	for (i = 1; i <= 32; i++)
	{
		if (a < 4000000 && (a % 2) == 0)
		{
			duplicados = duplicados + a;
		}
		suma = a + b;
		a = b;
		b = suma;
	}
	printf("%ld\n", duplicados);
	return (0);
}
