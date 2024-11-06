#include <stdio.h>

/**
 * main - Prints all arguments it receives, one per line.
 * @argc: The number of command-line arguments.
 * @argv: The array of command-line arguments.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	for (int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
