#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds positive numbers and prints the result.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings representing the command-line arguments.
 *
 * Description:
 * This program adds all positive numbers passed as command-line arguments
 * and prints the sum. If no arguments are passed, it prints 0. If any
 * argument is invalid (contains non-digit characters), the program prints
 * "Error" and returns 1.
 *
 * Return:
 * 0 on success (if all arguments are valid and the sum is calculated),
 * 1 if any argument is invalid (non-digit characters).
 */

int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
