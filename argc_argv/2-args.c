#include <stdio.h>

/**
 * main - Prints all arguments it receives, one per line.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings representing the command-line arguments.
 *
 * Description:
 * This program prints each argument received, including the program's name,
 * followed by a new line. It prints one argument per line.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
