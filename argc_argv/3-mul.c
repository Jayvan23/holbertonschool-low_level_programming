#include <stdio.h>
#include <stdlib.h>  // For atoi()

/**
 * main - Multiplies two numbers.
 * @argc: The number of command-line arguments.
 * @argv: The array of command-line arguments.
 *
 * Return: 0 if the program works correctly, or 1 if there's an error.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	printf("%d\n", num1 * num2);

	return (0);
}
